
TARGETS := clean init debug class main menu class1

BUILD_PATH=$(PWD)
BUILD_TEMP=$(BUILD_PATH)/build_temp/temp
CLASS_PATH=$(BUILD_PATH)/class
CLASS_TEMP=$(BUILD_PATH)/build_temp/class

.PHONY: all $(TARGETS)
all: $(TARGETS)

init:
	@echo "=== init"
	@if [ ! -d $(BUILD_TEMP) ]; then \
	{ \
		echo "War: can not found $(BUILD_TEMP), will creat it." \
		echo mkdir $(BUILD_TEMP); \
		mkdir $(BUILD_TEMP); \
	} \
	fi

	@if [ ! -d $(CLASS_PATH) ]; then \
	{ \
		echo "War: can not found $(CLASS_PATH), will creat it." \
		echo mkdir $(CLASS_PATH); \
		mkdir $(CLASS_PATH); \
	} \
	fi

	@if [ ! -d $(CLASS_TEMP) ]; then \
	{ \
		echo "War: can not found $(CLASS_TEMP), will creat it." \
		echo mkdir $(CLASS_TEMP); \
		mkdir $(CLASS_TEMP); \
	} \
	fi

debug:
	@echo "=== just debug"
	echo "BUILD_PATH = $(BUILD_PATH)"
	echo "BUILD_TEMP = $(BUILD_TEMP)"

class:
	@echo "=== ready to build helloworld"
	g++ -v -t $(CLASS_PATH)/helloworld/helloworld.cpp -o $(CLASS_TEMP)/helloworld

	@echo "=== ready to build sizeof_strlen"
	g++ -v -t $(CLASS_PATH)/sizeof_strlen/sizeof_strlen.cpp -o $(CLASS_TEMP)/sizeof_strlen

main:
	@echo "=== ready to build main.o"
	g++ -v -t -c $(BUILD_PATH)/main/main.cpp -o $(BUILD_TEMP)/main.o

menu:
	@echo "=== ready to build menu.o"
	g++ -v -t -c $(BUILD_PATH)/menu/menu_1.cpp -o $(BUILD_TEMP)/menu_1.o

class1:
	@echo "=== ready to build class1"
	#g++ -v -t main/main.cpp menu/menu_1.cpp -o menu.bzhu_Study
	g++ -v -t $(BUILD_TEMP)/*.o -o $(BUILD_PATH)/class1.btest

clean:
	rm -rf $(BUILD_TEMP)/*
