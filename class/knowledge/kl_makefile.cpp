#include <stdio.h>

int main(int argc, char **argv)
{
	printf("\
Makefile 中书写shell命令时可以加2种前缀: \n\
	不用前缀 :: 输出执行的命令以及命令执行的结果, 出错的话停止执行 \n\
	前缀 @ :: 只输出命令执行的结果, 出错的话停止执行 \n\
	前缀 - :: 命令执行有错的话, 忽略错误, 继续执行 \
	\n\n");

	printf("\
注意，调用shell命令，如if循环语句时，要注意\"/\"符号和\";\"符号, 例如： \n\
	@echo \"=== init ===\"; \n\
	@if [ ! -d $(BUILD_TEMP) ]; then \\ \n\
	{ \\ \n\
		echo \"War: can not found $(BUILD_TEMP), will creat it. mkdir -p $(BUILD_TEMP);\"; \\ \n\
		mkdir -p $(BUILD_TEMP); \\ \n\
	} \\ \n\
	fi \n\
	\n\n");
	return 0;
}
