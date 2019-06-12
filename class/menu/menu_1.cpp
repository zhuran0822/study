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

#ifndef CLASS_BIN_PATH
#define CLASS_BIN_PATH "/build_temp/class/bin/"
#endif

#ifndef CLASS_BIN_HELLOWORLD
#define CLASS_BIN_HELLOWORLD CLASS_BIN_PATH"helloworld"
#endif

#ifndef CLASS_BIN_SIZEOF_STRLEN
#define CLASS_BIN_SIZEOF_STRLEN CLASS_BIN_PATH"sizeof_strlen"
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

void menu_1::FindClassName(char ClassName[100], char *BinName)
{
	sprintf(ClassName, "%s%s", runPath, BinName);
	printf("ClassName = %s\n", ClassName);

	return;
}

char menu_1::ChooseClass()
{
	char ClassName[100];
	char number_class = GetClassnumber();

	switch(number_class)
	{
		case '1':
			printf("ready to run \"helloworld\" ---\n");
			FindClassName(ClassName, CLASS_BIN_HELLOWORLD);
			system(ClassName);
			break;

		case '2':
			printf("ready to run \"sizeof_strlen\" ---\n");
			FindClassName(ClassName, CLASS_BIN_SIZEOF_STRLEN);
			system(ClassName);
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
