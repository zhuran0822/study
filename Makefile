
TARGETS := clean CHECKDIR class class1

SDK_PATH=$(PWD)
BUILD_TEMP=$(SDK_PATH)/build_temp
CLASS_PATH=$(SDK_PATH)/class/menu
BIN_TEMP=$(BUILD_TEMP)/class/bin

.PHONY: all $(TARGETS)
all: $(TARGETS)

CHECKDIR:
	@echo "=== CHECKDIR ===";
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
	@echo "=== just debug ===";
	@echo "SDK_PATH = $(SDK_PATH)";
	@echo "BUILD_TEMP = $(BUILD_TEMP)";
	@echo "CLASS_PATH = $(CLASS_PATH)";
	@echo "BIN_TEMP = $(BIN_TEMP)";

class:
	@cd class && make ;

class1:
	@echo "=== ready to build class1 ===";
#	g++ -v -t $(BIN_TEMP)/*.o -o $(SDK_PATH)/class1.btest;
	g++ $(BIN_TEMP)/*.o -o $(SDK_PATH)/class1.btest;

clean:
	@echo "=== ready to clean all ===";
	rm -rf $(BUILD_TEMP) $(SDK_PATH)/*.btest ;
