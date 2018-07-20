
TARGETS := clean CHECKDIR class

SDK_PATH=$(PWD)/../..
CLASS_PATH=$(SDK_PATH)/class

BUILD_TEMP=$(SDK_PATH)/build_temp
BIN_TEMP=$(BUILD_TEMP)/bin

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

	@if [ ! -d $(BIN_TEMP) ]; then \
	{ \
		echo "War: can not found $(BIN_TEMP), will creat it. mkdir -p $(BIN_TEMP);"; \
		mkdir -p $(BIN_TEMP); \
	} \
	fi

	@if [ ! -d $(CLASS_PATH) ]; then \
	{ \
		echo "War: can not found $(CLASS_PATH), will creat it. mkdir -p $(CLASS_PATH);"; \
		mkdir -p $(CLASS_PATH); \
	} \
	fi

debug:
	@echo "=== just debug ===";
	@echo "SDK_PATH = $(SDK_PATH)";
	@echo "BIN_TEMP = $(BIN_TEMP)";

class:
	@echo "=== ready to build knowledge ===";
#	g++ -v -t $(CLASS_PATH)/knowledge/kl_makefile.cpp -o $(BIN_TEMP)/kl_makefile;
	g++ $(CLASS_PATH)/knowledge/kl_makefile.cpp -o $(BIN_TEMP)/kl_makefile;

	@echo "=== ready to build helloworld ===";
#	g++ -v -t $(CLASS_PATH)/helloworld/helloworld.cpp -o $(BIN_TEMP)/helloworld;
	g++ $(CLASS_PATH)/helloworld/helloworld.cpp -o $(BIN_TEMP)/helloworld;

	@echo "=== ready to build sizeof_strlen ===";
#	g++ -v -t $(CLASS_PATH)/sizeof_strlen/sizeof_strlen.cpp -o $(BIN_TEMP)/sizeof_strlen;
	g++ $(CLASS_PATH)/sizeof_strlen/sizeof_strlen.cpp -o $(BIN_TEMP)/sizeof_strlen;

clean:
	@echo "=== ready to build class1 ===";
#	@echo "rm -rf $(BUILD_TEMP) $(SDK_PATH)/*.btest ;";
	rm -rf $(BUILD_TEMP) $(SDK_PATH)/*.btest ;
