
TARGETS := class

BIN_NAME=sizeof_strlen

SDK_PATH=$(PWD)/../..
BUILD_TEMP=$(SDK_PATH)/build_temp
CLASS_PATH=$(SDK_PATH)/class/$(BIN_NAME)
CLASS_FILE := $(CLASS_PATH)/$(BIN_NAME).cpp
BIN_TEMP=$(BUILD_TEMP)/bin

.PHONY: all $(TARGETS)
all: $(TARGETS)

CHECKDIR:
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

debug:
	@echo ;
#	@echo "=== just debug ===";BIN_NAME
	@echo "BIN_NAME = $(BIN_NAME)";
	@echo "SDK_PATH = $(SDK_PATH)";
	@echo "BUILD_TEMP = $(BUILD_TEMP)";
	@echo "CLASS_PATH = $(CLASS_PATH)";
	@echo "CLASS_FILE = $(CLASS_FILE)";
	@echo "BIN_TEMP = $(BIN_TEMP)";

class: 
	@echo ;
	@echo "=== ready to build main ===";
#	g++ -v -t $(CLASS_PATH)/helloworld/main.cpp -o $(BIN_TEMP)/main;
	g++ $(CLASS_FILE) -o $(BIN_TEMP)/$(BIN_NAME);
	@echo ;

clean:
#	@echo "=== ready to do clean process ===";
#	@echo "rm -rf $(BUILD_TEMP) $(SDK_PATH)/*.btest ;";
	rm -rf $(BIN_TEMP)/$(BIN_NAME) ;
