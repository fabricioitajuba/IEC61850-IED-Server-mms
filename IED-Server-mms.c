#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "static_model.h"

/* Configuração de Debug: altere entre ON e OFF */
#define ON  1
#define OFF 0

#define DEBUG OFF

#if DEBUG == ON
    #define LOG_DEBUG(...) printf(__VA_ARGS__)
#else
    #define LOG_DEBUG(...) do {} while(0)
#endif

/* Booleanos (SPS) */
#define IED_S1_VAL       IEDMODEL_GenericIO_GGIO1_Ind1_stVal
#define IED_S1_TIME      IEDMODEL_GenericIO_GGIO1_Ind1_t

#define IED_S2_VAL       IEDMODEL_GenericIO_GGIO1_Ind2_stVal
#define IED_S2_TIME      IEDMODEL_GenericIO_GGIO1_Ind2_t

#define IED_S3_VAL       IEDMODEL_GenericIO_GGIO1_Ind3_stVal
#define IED_S3_TIME      IEDMODEL_GenericIO_GGIO1_Ind3_t

#define IED_U_LOW_VAL    IEDMODEL_GenericIO_GGIO1_Ind4_stVal
#define IED_U_LOW_TIME   IEDMODEL_GenericIO_GGIO1_Ind4_t

/* Double Point Status (DPC - Posição Dupla) */
#define IED_DPC_VAL      IEDMODEL_GenericIO_GGIO1_DPCSO1_stVal
#define IED_DPC_TIME     IEDMODEL_GenericIO_GGIO1_DPCSO1_t

/* Ponto Flutuante / Analógico (MV - FLOAT32) */
#define IED_FLOAT_VAL    IEDMODEL_GenericIO_GGIO1_AnIn1_mag_f
#define IED_FLOAT_TIME   IEDMODEL_GenericIO_GGIO1_AnIn1_t

/* Inteiro (INS - INT32) */
#define IED_INT_VAL      IEDMODEL_GenericIO_GGIO1_IntIn1_stVal
#define IED_INT_TIME     IEDMODEL_GenericIO_GGIO1_IntIn1_t

/* Enumerado (ENS - Enum) */
#define IED_ENUM_VAL     IEDMODEL_GenericIO_GGIO1_EnumIn1_stVal
#define IED_ENUM_TIME    IEDMODEL_GenericIO_GGIO1_EnumIn1_t

/* String Visível (LPL - VisString255) */
#define IED_STR_VAL      IEDMODEL_GenericIO_GGIO1_StrIn1_d

/* Objetos de Comando/Controle (SPC e DPC) */
#define IED_CMD_SPC      IEDMODEL_GenericIO_GGIO1_SPCSO1
#define IED_CMD_SPC_VAL  IEDMODEL_GenericIO_GGIO1_SPCSO1_stVal
#define IED_CMD_SPC_TIME IEDMODEL_GenericIO_GGIO1_SPCSO1_t

#define IED_CMD_DPC      IEDMODEL_GenericIO_GGIO1_DPCSO2
#define IED_CMD_DPC_VAL  IEDMODEL_GenericIO_GGIO1_DPCSO2_stVal
#define IED_CMD_DPC_TIME IEDMODEL_GenericIO_GGIO1_DPCSO2_t

static int running = 0;
static IedServer iedServer = NULL;

void sigint_handler(int signalId){
    running = 0;
}

static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void* parameter){

    if (connected)
        LOG_DEBUG("[IED-Server-mms] Cliente conectado!\n");
    else
        LOG_DEBUG("[IED-Server-mms] Cliente desconectado.\n");
}

/* Callback executado quando um comando de controle chega do cliente SCADA */
static ControlHandlerResult
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test)
        return CONTROL_RESULT_FAILED;

    if (MmsValue_getType(value) != MMS_BOOLEAN)
        return CONTROL_RESULT_FAILED;

    bool state = MmsValue_getBoolean(value);
    uint64_t timestamp = Hal_getTimeInMs();

    if (parameter == IED_CMD_SPC) {
        LOG_DEBUG("[COMANDO] SPCSO1 (Direct) recebido -> Novo estado: %s\n", state ? "ON (1)" : "OFF (0)");

        IedServer_updateBooleanAttributeValue(iedServer, IED_CMD_SPC_VAL, state);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_CMD_SPC_TIME, timestamp);
    }
    else if (parameter == IED_CMD_DPC) {
        Dbpos novoEstadoDpc = state ? DBPOS_ON : DBPOS_OFF;
        LOG_DEBUG("[COMANDO] DPCSO2 (SBO Enhanced) recebido -> Novo estado: %s\n", state ? "FECHADO/ON (2)" : "ABERTO/OFF (1)");

        IedServer_updateDbposValue(iedServer, IED_CMD_DPC_VAL, novoEstadoDpc);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_CMD_DPC_TIME, timestamp);
    }
    else {
        return CONTROL_RESULT_FAILED;
    }

    return CONTROL_RESULT_OK;
}

int main(int argc, char** argv) {

    int tcpPort = (argc > 1) ? atoi(*(argv + 1)) : 102;

    LOG_DEBUG("Iniciando servidor IEC 61850 IED-Server-mms (libIEC61850 %s)...\n", LibIEC61850_getVersionString());

    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setEdition(config, IEC_61850_EDITION_2);
    IedServerConfig_setMaxMmsConnections(config, 2);

    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);

    IedServer_setServerIdentity(iedServer, "Zilocchi", "IED-Server-mms", "1.0.0");
    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    /* Registra os handlers para os objetos de comando */
    IedServer_setControlHandler(iedServer, IED_CMD_SPC, (ControlHandler) controlHandlerForBinaryOutput, IED_CMD_SPC);
    IedServer_setControlHandler(iedServer, IED_CMD_DPC, (ControlHandler) controlHandlerForBinaryOutput, IED_CMD_DPC);

    /* Inicializa o estado inicial do Disjuntor de comando (DPCSO2) como ABERTO (DBPOS_OFF) */
    IedServer_updateDbposValue(iedServer, IED_CMD_DPC_VAL, DBPOS_OFF);

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        printf("Falha ao iniciar o servidor na porta %d! (Tente executar com sudo)\n", tcpPort);
        IedServer_destroy(iedServer);
        exit(-1);
    }

#if DEBUG == ON
    printf("Servidor IED-Server-mms ativo e escutando na porta %d.\n", tcpPort);
#else
    printf("IED_Server_mms Startado!\n");
    printf("Para sair pressione as teclas Ctrl+C\n");
    fflush(stdout);
    freopen("/dev/null", "w", stdout); /* Silencia os logs internos da libIEC61850 */
#endif

    running = 1;
    signal(SIGINT, sigint_handler);

    uint8_t contador = 0;
    int32_t valorInteiro = 0;
    float valorAnalogico = 220.0f;
    char textoStatus[64];

    /* Estados válidos de Dbpos na IEC 61850 */
    Dbpos estadosDpc[4] = { DBPOS_OFF, DBPOS_ON, DBPOS_INTERMEDIATE_STATE, DBPOS_BAD_STATE };

    while (running) {

        uint64_t timestamp = Hal_getTimeInMs();

        /* 1. Booleanos (SPS) */
        contador = (contador + 1) & 0x0F;
        bool s1 = (contador & 0x01) != 0;
        bool s2 = (contador & 0x02) != 0;
        bool s3 = (contador & 0x04) != 0;
        bool u_low = (contador & 0x08) != 0;

        /* 2. Double Point (DPC - alterna entre 0, 1, 2 e 3) */
        Dbpos dpcAtual = estadosDpc[contador % 4];

        /* 3. Analógico FLOAT32 (varia entre 220.0 e 235.0) */
        valorAnalogico += 0.5f;
        if (valorAnalogico > 235.0f) valorAnalogico = 220.0f;

        /* 4. Inteiro INT32 (incrementa a cada segundo) */
        valorInteiro++;

        /* 5. Enumerado (Beh: 1=on, 2=blocked, 3=test, 4=test/blocked, 5=off) */
        int32_t valorEnum = (valorInteiro % 5) + 1;

        /* 6. String Visível (VisString255) */
        snprintf(textoStatus, sizeof(textoStatus), "CICLO_%d", valorInteiro);

        LOG_DEBUG("[IED-Server-mms] S1:%d S2:%d S3:%d U<:%d | DPC:%d | Float:%.1f | Int:%d | Enum:%d | Str:%s\n",
                  s1, s2, s3, u_low, dpcAtual, valorAnalogico, valorInteiro, valorEnum, textoStatus);

        IedServer_lockDataModel(iedServer);

        /* Atualiza Booleanos (SPS) */
        IedServer_updateBooleanAttributeValue(iedServer, IED_S1_VAL, s1);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_S1_TIME, timestamp);

        IedServer_updateBooleanAttributeValue(iedServer, IED_S2_VAL, s2);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_S2_TIME, timestamp);

        IedServer_updateBooleanAttributeValue(iedServer, IED_S3_VAL, s3);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_S3_TIME, timestamp);

        IedServer_updateBooleanAttributeValue(iedServer, IED_U_LOW_VAL, u_low);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_U_LOW_TIME, timestamp);

        /* Atualiza Posição Dupla (Dbpos) */
        IedServer_updateDbposValue(iedServer, IED_DPC_VAL, dpcAtual);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_DPC_TIME, timestamp);

        /* Atualiza Ponto Flutuante (FLOAT32) */
        IedServer_updateFloatAttributeValue(iedServer, IED_FLOAT_VAL, valorAnalogico);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_FLOAT_TIME, timestamp);

        /* Atualiza Inteiro (INT32) */
        IedServer_updateInt32AttributeValue(iedServer, IED_INT_VAL, valorInteiro);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_INT_TIME, timestamp);

        /* Atualiza Enumerado (Enum) */
        IedServer_updateInt32AttributeValue(iedServer, IED_ENUM_VAL, valorEnum);
        IedServer_updateUTCTimeAttributeValue(iedServer, IED_ENUM_TIME, timestamp);

        /* Atualiza String Visível (VisString255) */
        IedServer_updateVisibleStringAttributeValue(iedServer, IED_STR_VAL, textoStatus);

        IedServer_unlockDataModel(iedServer);

        Thread_sleep(1000);
    }

    LOG_DEBUG("\nEncerrando servidor IED-Server-mms...\n");
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);

    return 0;
}
