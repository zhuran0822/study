
TARGETS := CHECKDIR class

SDK_PATH=$(PWD)/..
BUILD_TEMP=$(SDK_PATH)/build_temp
CLASS_PATH=$(SDK_PATH)/class/menu
BIN_TEMP=$(BUILD_TEMP)/bin

.PHONY: all $(TARGETS)
all: $(TARGETS) $(SUB_DIR)

CHECKDIR:
#	@echo
#	@echo "=== CHECKDIR ===";
	@if [ ! -d $(BUILD_TEMP) ]; then \
	{ \
		echo "War: can not found $(BUILD_TEMP), will creat it. mkdir -p $(BUILD_TEMP);"; \
		mkdir -p $(BUILD_TEMP); \
	} \
	fi

	@if [ ! -d $(CLASS_PATH) ]; then \
	{ \
		echo "War: can not found $(CLASS_PATH), will creat it. mkdir -p $(CLASS_PATH);"; \
		mkdir -p $(CLASS_PATH); \
	} \
	fi

	@if [ ! -d $(BIN_TEMP) ]; then \
	{ \
		echo "War: can not found $(BIN_TEMP), will creat it. mkdir -p $(BIN_TEMP);"; \
		mkdir -p $(BIN_TEMP); \
	} \
	fi

class: 
	@echo ;
	@echo "=== ready to build SUB_DIR ===" ;
#-C 参数的含义： -C DIRECTORY, --directory=DIRECTORY  Change to DIRECTORY before doing anything.
	@cd main && make ;
	@cd menu && make ;
	@cd helloworld && make ;
	@cd sizeof_strlen && make ;
	
debug:
	@echo ;
	@echo "=== just debug ===";
	@echo "SDK_PATH = $(SDK_PATH)";
	@echo "BUILD_TEMP = $(BUILD_TEMP)";
	@echo "CLASS_PATH = $(CLASS_PATH)";
	@echo "BIN_TEMP = $(BIN_TEMP)";

clean:
	@echo ;
	@echo "=== ready to do clean process ===";
	cd main && make clean;
	@echo ;
	cd menu && make clean;
	@echo ;
	cd helloworld && make clean;
	@echo ;
	cd sizeof_strlen && make clean;
	@echo ;
