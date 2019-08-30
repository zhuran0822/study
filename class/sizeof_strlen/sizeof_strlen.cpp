#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char level = 100; //print level

char change_print_level()
{
	int level_temp = 0;
	//level = getchar() - 48;
	scanf("%d", &level_temp);
	printf("print level_temp = %d\n", level_temp);
	//getchar();
	return level_temp;
}

void init()
{
	if (0 == level)
	{
		//printf("exit sizeof_strlen . \n");
		return;
	}
	else
	{
		printf("\
Orign address:\
https://blog.csdn.net/yelbosh/article/details/12656113\n\
(1) sizeof是一个C语言中的一个单目运算符，而strlen是一个函数，用来计算字符串的长度。\n\
(2) sizeof求的是数据类型所占空间的大小，而strlen是求字符串的长度\n");
	}

	return;
}

void print_sizeof()
{

	printf("sizeof(char) = %ld\n",sizeof(char));  //1
	printf("sizeof(char*) = %ld\n",sizeof(char*)); //4 or 8
	printf("sizeof(int) = %ld\n",sizeof(int)); //4
	printf("sizeof(int*) = %ld\n",sizeof(int*)); //4 or 8
	printf("sizeof(long) = %ld\n",sizeof(long)); //4 or 8
	printf("sizeof(long*) = %ld\n",sizeof(long*)); //4 or 8
	printf("sizeof(double) = %ld\n",sizeof(double)); //8 or 8
	printf("sizeof(double*) = %ld\n",sizeof(double*)); //4 or 8

	if (0 == level)
	{
		return;
	}
	else
	{
		printf("\n可以看到，char占1个字节，int占4个字节，long点4个字节，而double占8个字节。但 char*,int*,long*,double*都占4个字节的空间。这是为什么呢？在C语言中，char,int,long,double这些基本数据类型的长度是由编译器本身决定的。而char*,int*,long*,double*这些都是指针，回想一下，指针就是地址呀，所以里面放的都是地址，而地址的长度当前是由地址总线的位数决定的，现在的计算机一般都是32位的地址总线，也就占4个字节。\n#################################\n\n\n");
	}

	return;
}

void print_strlen()
{
	char a[]="hello";
	char b[]={'h','e','l','l','o','w','o','r','l','d'};
	char *c="abcdef";
	char d[]="abcdef";
	char e[]={'a','b','c','d','e','f'};

	printf("\
char a[]=\"hello\";\n\
char b[]={'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};\n\
char *c=\"abcdef\";\n\
char d[]=\"abcdef\";\n\
char e[]={'a','b','c','d','e','f'};\n\
");
	printf("sizeof(a) = %ld, strlen(a) = %ld\n", sizeof(a), strlen(a));
	printf("sizeof(b) = %ld, strlen(b) = %ld\n", sizeof(b), strlen(b));
	printf("sizeof(c) = %ld, strlen(c) = %ld\n", sizeof(c), strlen(c));
	printf("sizeof(d) = %ld, strlen(d) = %ld\n", sizeof(d), strlen(d));
	printf("sizeof(e) = %ld, strlen(e) = %ld\n", sizeof(e), strlen(e));
	
	if (0 == level)
	{
		return;
	}
	else
	{
		printf("\n\
前面分析过，strlen是求字符串的长度，字符串有个默认的结束符/0,这个结束符是在定义字符串的时候系统自动加上去的，就像定义数组a一样。数组a定义了一个字符串，数组b定义了一个字符数组。因此，strlen(a)=5,而strlen(b)的长度就不确定的，因为strlen找不到结束符。\n\
第一行定义c为一个字符指针变量，指向常量字符串，c里面存放的是字符串的首地址。\n\
第二行定义d为一个字符数组，以字符串的形式给这个字符数组赋值。\n\
第三行定义的也是个字符数组，以单个元素的形式赋值。\n\
\n\
当以字符串赋值时，\"abcdef\",结尾自动加一个\"/0\".\n\
strlen(c)遇到/0就会结束，求的是字符串的长度，为6.\n\
sizeof(c)求的是类型空间大小，在前面说过，指针型所点的空间大小是4个字节，系统地址总线长度为32位时。\n\
\n\
strlen(d)也是一样，字符串赋值，自动添加/0,求字符串的长度当然是6.\n\
sizeof(d)是求这个数组所占空间的大小，即数组所占内存空间的字节数，应该为7.\n\
\n\
sizeof(e), 数组e以单个元素赋值，没有/0结束符，所以所占空间的大小为6个字节。\n\
strlen(e),去找/0结尾的字符串的长度，由于找不到/0，所以返回的值是一个不确定的值。\n\
");
	}

	return;
}

int main(int argc, char* argv[])
{
	if (2 == argc && level == atoi(argv[1]))
	{
		//printf("argc = %d, argv[0] = %s, argv[1] = %s\n", argc, argv[0], argv[1]);
		printf("debug level = %d\n\n", level);
	}
	else
	{
		level = 0;

		printf("please choose print level: \n             0(simple) ;   1 (complete) \n");
		level = change_print_level();
		//printf("debug level = %d\n\n", level);
	}

	init();

	print_sizeof();
	print_strlen();

	return 0;
}
