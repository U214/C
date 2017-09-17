#pragma warning(disable : 4996)
#include <stdio.h>

int main62(void)
{
	FILE* fp = fopen("data.txt", "wt");

	if (fp == NULL) {
		puts("파일 오픈 실패");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	
	fclose(fp); //닫기전까지 파일에 락이 걸림

	return 0;
}