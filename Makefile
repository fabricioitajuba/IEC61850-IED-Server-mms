LIBIEC_HOME=../..

PROJECT_BINARY_NAME = IED-Server-mms
PROJECT_SOURCES = IED-Server-mms.c
PROJECT_SOURCES += static_model.c

PROJECT_ICD_FILE = IED-Server-mms.cid

include $(LIBIEC_HOME)/make/target_system.mk
include $(LIBIEC_HOME)/make/stack_includes.mk

all:	$(PROJECT_BINARY_NAME)

include $(LIBIEC_HOME)/make/common_targets.mk

CP = cp

static_model.c static_model.h:	$(PROJECT_ICD_FILE)
	java -jar $(LIBIEC_HOME)/tools/model_generator/genmodel.jar $(PROJECT_ICD_FILE)

model:	static_model.c

$(PROJECT_BINARY_NAME):	$(PROJECT_SOURCES) $(LIB_NAME)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(PROJECT_BINARY_NAME) $(PROJECT_SOURCES) $(INCLUDES) $(LIB_NAME) $(LDLIBS)
	mkdir -p vmd-filestore
	$(CP) $(PROJECT_BINARY_NAME) vmd-filestore/IEDSERVER.BIN

clean:
	rm -f $(PROJECT_BINARY_NAME)
	rm -f vmd-filestore/IEDSERVER.BIN
