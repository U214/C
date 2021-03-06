#pragma warning(disable : 4996)
#include <stdio.h>

struct point {
	int xpos;
	int ypos;
};

int main46(void)
{
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* pptr = &pos1;

	(*pptr).xpos = (*pptr).xpos + 4;
	(*pptr).ypos = (*pptr).ypos + 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

	pptr = &pos2;
	pptr->xpos = pptr->xpos + 1;
	pptr->ypos = pptr->ypos + 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);

	return 0;
}