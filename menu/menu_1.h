#ifndef _STUDY_MENU_1_H
#define _STUDY_MENU_1_H

//#include "../bruce_debug/bruce_debug.h"

//class menu_1 : public bruce_debug
class menu_1
{
public:
	menu_1();
	~menu_1();

	char GetClassnumber(void);
	char ChooseClass(void);

	int a;
	int b;
	
	void show_menu_1_1(void);

private:
	int c;
};

#endif

