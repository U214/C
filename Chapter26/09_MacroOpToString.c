#pragma warning(disable : 4996)
#include <stdio.h>

#define STRING_JOB(A, B)	#A "�� ������ " #B "�Դϴ�"

int main82(void)
{
	printf("%s \n", STRING_JOB(�̵���, ������));
	printf("%s \n", STRING_JOB(�ѻ��, ��ɲ�));

	return 0;
}