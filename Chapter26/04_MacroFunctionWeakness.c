#pragma warning(disable : 4996)
#include <stdio.h>

#define DIFF_ABS(x, y)		((x)>(y) ? (x)-(y) : (y)-(x))

int main77(void)
{
	printf("�� ���� �� : %d \n", DIFF_ABS(5, 7));
	printf("�� ���� �� : %d \n", DIFF_ABS(1.8, 1.4));

	return 0;
}
//�߸� ���ǵ� ��