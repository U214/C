#pragma warning(disable : 4996)
#include <stdio.h>

#define PI				3.14
#define PRODUCT(X, Y)	((X)*(Y))
#define CIRCLE_AREA(R)	(PRODUCT((R), (R))*PI)

int main76(void)
{
	double rad = 2.1;
	printf("������ %g�� ���� ���� : %g \n", rad, CIRCLE_AREA(rad));

	return 0;
}