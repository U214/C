#include <stdio.h>

int main1(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;
	*pnum = *pnum + 30;

	pnum = &num2;
	*pnum = *pnum - 30;

	printf("num1 : %d, num2 : %d \n", num1, num2);

	return 0;
}

/*
	int num = 5;
	int* pnum = &num;
	printf("%d %d", num, *pnum);
*/