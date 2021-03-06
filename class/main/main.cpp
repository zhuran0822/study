/*
 * main.cpp
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

#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include "../menu/menu_1.h"
#include "../bruce_debug/bruce_debug.h"


int main(int argc, char **argv)
{
	printf("### main ready ###\n");
	usleep(3);

	menu_1 menu1;
	menu1.show_menu_1_1();
	
	return 0;
}

