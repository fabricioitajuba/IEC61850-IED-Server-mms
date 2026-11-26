/*
 * static_model.c
 *
 * automatically generated from IED-Server-mms.cid
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_GenericIO_LLN0_StatusIED_Server_mms;


extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda0;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda1;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda2;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda3;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda4;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda5;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda6;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda7;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda8;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda9;
extern DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda10;

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda0 = {
  "GenericIO",
  false,
  "GGIO1$ST$Ind1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda1
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda1 = {
  "GenericIO",
  false,
  "GGIO1$ST$Ind2$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda2
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda2 = {
  "GenericIO",
  false,
  "GGIO1$ST$Ind3$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda3
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda3 = {
  "GenericIO",
  false,
  "GGIO1$ST$Ind4$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda4
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda4 = {
  "GenericIO",
  false,
  "GGIO1$ST$DPCSO1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda5
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda5 = {
  "GenericIO",
  false,
  "GGIO1$MX$AnIn1$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda6
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda6 = {
  "GenericIO",
  false,
  "GGIO1$ST$IntIn1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda7
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda7 = {
  "GenericIO",
  false,
  "GGIO1$ST$EnumIn1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda8
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda8 = {
  "GenericIO",
  false,
  "GGIO1$DC$StrIn1$d", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda9
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda9 = {
  "GenericIO",
  false,
  "GGIO1$ST$SPCSO1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda10
};

DataSetEntry iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda10 = {
  "GenericIO",
  false,
  "GGIO1$ST$DPCSO2$stVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_GenericIO_LLN0_StatusIED_Server_mms = {
  "GenericIO",
  "LLN0$StatusIED_Server_mms",
  11,
  &iedModelds_GenericIO_LLN0_StatusIED_Server_mms_fcda0,
  NULL
};

LogicalDevice iedModel_GenericIO = {
    LogicalDeviceModelType,
    "GenericIO",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_GenericIO_LLN0,
    NULL
};

LogicalNode iedModel_GenericIO_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_GenericIO,
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
};

DataObject iedModel_GenericIO_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    (ModelNode*) &iedModel_GenericIO_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_GenericIO_LLN0,
    NULL,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_GenericIO_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_GenericIO_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_GenericIO,
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
};

DataObject iedModel_GenericIO_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_GenericIO_LPHD1,
    NULL,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_LPHD1_Proxy_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_GenericIO_GGIO1 = {
    LogicalNodeModelType,
    "GGIO1",
    (ModelNode*) &iedModel_GenericIO,
    NULL,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
};

DataObject iedModel_GenericIO_GGIO1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Ind1 = {
    DataObjectModelType,
    "Ind1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Ind2 = {
    DataObjectModelType,
    "Ind2",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Ind3 = {
    DataObjectModelType,
    "Ind3",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_Ind4 = {
    DataObjectModelType,
    "Ind4",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_Ind4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_Ind4,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_DPCSO1 = {
    DataObjectModelType,
    "DPCSO1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO1_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_AnIn1 = {
    DataObjectModelType,
    "AnIn1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_IntIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_mag,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_q,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_AnIn1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_AnIn1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_IntIn1 = {
    DataObjectModelType,
    "IntIn1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_EnumIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_IntIn1_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_IntIn1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_IntIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_IntIn1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_IntIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_IntIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_IntIn1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_IntIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_IntIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_IntIn1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_IntIn1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_IntIn1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_EnumIn1 = {
    DataObjectModelType,
    "EnumIn1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_StrIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_EnumIn1_stVal,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_EnumIn1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_EnumIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_EnumIn1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_EnumIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_EnumIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_EnumIn1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_EnumIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_EnumIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_EnumIn1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_EnumIn1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_EnumIn1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_StrIn1 = {
    DataObjectModelType,
    "StrIn1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_StrIn1_vendor,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_StrIn1_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_GenericIO_GGIO1_StrIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_StrIn1_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_StrIn1_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_GenericIO_GGIO1_StrIn1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_StrIn1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_StrIn1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_StrIn1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_SPCSO1 = {
    DataObjectModelType,
    "SPCSO1",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_stVal,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_SPCSO1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_SPCSO1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_GenericIO_GGIO1_DPCSO2 = {
    DataObjectModelType,
    "DPCSO2",
    (ModelNode*) &iedModel_GenericIO_GGIO1,
    NULL,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw,
    0,
    -1
};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_SBOw = {
    DataAttributeModelType,
    "SBOw",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_SBOw_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_SBOw_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_SBOw_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_SBOw_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_SBOw_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_SBOw_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_SBOw_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_SBOw_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_SBOw,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_stVal,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel_ctlNum,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel_origin,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_Cancel,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_GenericIO_GGIO1_DPCSO2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_GenericIO_GGIO1_DPCSO2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_GenericIO_LLN0_report0;
extern ReportControlBlock iedModel_GenericIO_LLN0_report1;

ReportControlBlock iedModel_GenericIO_LLN0_report0 = {&iedModel_GenericIO_LLN0, "StatusRCB01", "StatusIED_Server_mms", true, "StatusIED_Server_mms", 1, 89, 175, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_GenericIO_LLN0_report1};
ReportControlBlock iedModel_GenericIO_LLN0_report1 = {&iedModel_GenericIO_LLN0, "StatusRCB02", "StatusIED_Server_mms", true, "StatusIED_Server_mms", 1, 89, 175, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "IED-Server-mms",
    &iedModel_GenericIO,
    &iedModelds_GenericIO_LLN0_StatusIED_Server_mms,
    &iedModel_GenericIO_LLN0_report0,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_GenericIO_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_GenericIO_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Zilocchi");

iedModel_GenericIO_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString("1.0.0");

iedModel_GenericIO_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString("IED Monitor e Controle");

iedModel_GenericIO_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_GGIO1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_GGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_GenericIO_GGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_GGIO1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_GGIO1_Ind1_d.mmsValue = MmsValue_newVisibleString("S1");

iedModel_GenericIO_GGIO1_Ind2_d.mmsValue = MmsValue_newVisibleString("S2");

iedModel_GenericIO_GGIO1_Ind3_d.mmsValue = MmsValue_newVisibleString("S3");

iedModel_GenericIO_GGIO1_Ind4_d.mmsValue = MmsValue_newVisibleString("U<");

iedModel_GenericIO_GGIO1_DPCSO1_d.mmsValue = MmsValue_newVisibleString("Status Chave");

iedModel_GenericIO_GGIO1_AnIn1_d.mmsValue = MmsValue_newVisibleString("Tensao Fase A");

iedModel_GenericIO_GGIO1_IntIn1_d.mmsValue = MmsValue_newVisibleString("Contador Operacoes");

iedModel_GenericIO_GGIO1_EnumIn1_d.mmsValue = MmsValue_newVisibleString("Estado Operativo");

iedModel_GenericIO_GGIO1_StrIn1_d.mmsValue = MmsValue_newVisibleString("INIT");

iedModel_GenericIO_GGIO1_SPCSO1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_GenericIO_GGIO1_SPCSO1_d.mmsValue = MmsValue_newVisibleString("Comando Saida 1");

iedModel_GenericIO_GGIO1_DPCSO2_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(4);

iedModel_GenericIO_GGIO1_DPCSO2_sboTimeout.mmsValue = MmsValue_newUnsignedFromUint32(5000);

iedModel_GenericIO_GGIO1_DPCSO2_d.mmsValue = MmsValue_newVisibleString("Comando Disjuntor 52");
}
