#pragma warning(disable : 4996)
#include <stdio.h>

int main66(void)
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des1.txt", "wt");
	int ch;

	if ((src == NULL) || (des == NULL)) {
		puts("���Ͽ��� ����");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}

	if (feof(src) != 0) {
		puts("���� ���� �Ϸ�");
	}
	else {
		puts("���� ���� ����");
	}

	fclose(src);
	fclose(des);

	return 0;
}