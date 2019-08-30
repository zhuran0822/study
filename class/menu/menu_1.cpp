/*
 * menu_1.cpp
 * 
 * Copyright 2018 bruce <bruce@bruce-ubuntu>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "menu_1.h"
#include "../bruce_debug/bruce_debug.h"

#ifndef _CLASS_BIN_PATH_
#define _CLASS_BIN_PATH_
#define CLASS_BIN_PATH "/build_temp/class/bin/"
#define CLASS_BIN_HELLOWORLD CLASS_BIN_PATH"helloworld"
#define CLASS_BIN_SIZEOF_STRLEN CLASS_BIN_PATH"sizeof_strlen"
#define CLASS_BIN_DEMO_FILECHECK CLASS_BIN_PATH"filecheck"
#endif

menu_1::menu_1(void)
{	
	//brucedebug bdebug;
	printf("### test start ###\n");
//	return;
}

menu_1::~menu_1(void)
{
	return;
}

char test()
{

	printf("111\n");
}

char SystemRunBinFile(char *BinFile)
{
	//char BinFile[100];
	printf("ready to run \"%s\" ---\n", BinFile);
	system(BinFile);
}

char menu_1::Callback_Handle(char (*callback)())
{
	callback();
}

char menu_1::Callback_Handle(char (*callback)(char), char parm1)
{
	callback(parm1);
}

char menu_1::Callback_Handle(char (*callback)(char*), char* parm1)
{
	callback(parm1);
}

char menu_1::Callback_Handle(char (*callback)(char*, char*), char* parm1, char*parm2)
{
	callback(parm1, parm2);
}

void menu_1::check_runPath(void)
{ 
    //char buf[80];   
    getcwd(runPath,sizeof(runPath));   
    printf("current working directory: %s\n", runPath);     
}

void menu_1::show_menu_1_1(void)
{
	unsigned char num = 0;
	char number_class = 0;

	check_runPath();
	sleep(1);

	while(1)
	{
		system("clear");
		
		for( num = 0; num < 20; num++)
		{
			printf("#");
		}
		printf("\n");
		
		
		//choose the class number
		printf("    1. helloworld\n");
		printf("    2. sizeof_strlen\n");
		printf("    3. filecheck\n");
		printf("    Q. EXIT STUDY\n");
		
		//
		for( num = 0; num < 20; num++)
		{
			printf("#");
		}
		printf("\n");

		ChooseClass();

		B_DEBUG("please type enter button if you hope to continue study!\n");
		getchar();
	}

	return;
}

char menu_1::GetClassnumber()
{
	char number_class = getchar();
	B_DEBUG("number_class = %c\n", number_class);

	return number_class;
}

void menu_1::FindBinFile(char BinFile[100], char *BinName)
{
	sprintf(BinFile, "%s%s", runPath, BinName);
	printf("BinFile = %s\n", BinFile);

	return;
}

char menu_1::ChooseClass()
{
	char BinFile[100];
	char number_class = GetClassnumber();

	switch(number_class)
	{
		case '1':
			printf("ready to run \"helloworld\" ---\n");
			FindBinFile(BinFile, CLASS_BIN_HELLOWORLD);
			system(BinFile);
			break;

		case '2':
			printf("ready to run \"sizeof_strlen\" ---\n");
			FindBinFile(BinFile, CLASS_BIN_SIZEOF_STRLEN);
			system(BinFile);
			break;

		case '3':
			FindBinFile(BinFile, CLASS_BIN_DEMO_FILECHECK);
			Callback_Handle(test);
			Callback_Handle(SystemRunBinFile, BinFile);
			break;

		case 'q':
		case 'Q':
			printf("exit!\n");
			exit(0);

		default:
			printf("Warn: wrong number.\n");
			return 0;
	}

	getchar();

	return 0;
}
