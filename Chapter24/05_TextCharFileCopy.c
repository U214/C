#pragma warning(disable : 4996)
#include <stdio.h>

int main66(void)
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des1.txt", "wt");
	int ch;

	if ((src == NULL) || (des == NULL)) {
		puts("파일오픈 실패");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}

	if (feof(src) != 0) {
		puts("파일 복사 완료");
	}
	else {
		puts("파일 복사 실패");
	}

	fclose(src);
	fclose(des);

	return 0;
}