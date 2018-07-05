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
#include "menu_1.h"
#include "../bruce_debug/bruce_debug.h"

#ifndef CLASS_TEMP
#define CLASS_TEMP /home/bruce/Projects/Study/build_temp/class
#endif

menu_1::menu_1(void)
{	
	//brucedebug bdebug;
	printf("test\n");
//	return;
}

menu_1::~menu_1(void)
{
	return;
}

void menu_1::show_menu_1_1(void)
{
	unsigned char num = 0;
	char number_class = 0;

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
		printf("    2. helloworld\n");
		
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

void menu_1::ChooseClass()
{
	char number_class = GetClassnumber();

	switch(number_class)
	{
		case '1':
			system("/home/bruce/Projects/Study/build_temp/class/helloworld");
			getchar();
			break;

		default:
			printf("Warn: wrong number.");
			return;
	}

	return;	
}
