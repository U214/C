#pragma warning(disable : 4996)
#include <stdio.h>

int main62(void)
{
	FILE* fp = fopen("data.txt", "wt");

	if (fp == NULL) {
		puts("���� ���� ����");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	
	fclose(fp); //�ݱ������� ���Ͽ� ���� �ɸ�

	return 0;
}