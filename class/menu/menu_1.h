#ifndef _STUDY_MENU_1_H
#define _STUDY_MENU_1_H

//#include "../bruce_debug/bruce_debug.h"

//class menu_1 : public bruce_debug
class menu_1
{
public:
	menu_1();
	~menu_1();

	//char Callback_filecheck(void);
	char Callback_Handle(char (*callback)());
	char Callback_Handle(char (*callback)(char), char parm1);
	char Callback_Handle(char (*callback)(char*), char* parm1);
	char Callback_Handle(char (*callback)(char*, char*), char* parm1, char*parm2);
	
	char GetClassnumber(void);
	char ChooseClass(void);

	int a;
	int b;
	
	void show_menu_1_1(void);

private:
	int c;
	char runPath[80];
	void check_runPath(void);
	void FindBinFile(char BinFile[100], char *BinName);
};

#endif

