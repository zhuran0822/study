#ifndef _STUDY_DEBUG_H
#define _STUDY_DEBUG_H

#ifndef B_DEBUG
#define B_DEBUG printf("+++bruce debug(%s | %s | %d) : ", __FILE__, __func__, __LINE__); printf
#endif

/*
class bruce_debug
{
private:
	// data

	int c;

public:
	bruce_debug();
	~bruce_debug();
};
*/

#endif