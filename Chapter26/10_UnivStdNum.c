#pragma warning(disable : 4996)
#include <stdio.h>

#define STNUM(Y, S, P)		((Y)*100000+(S)*1000+(P))

int main83(void)
{
	printf("학번 : %d \n", STNUM(10, 65, 175));
	printf("학번 : %d \n", STNUM(10, 65, 075));

	return 0;
}