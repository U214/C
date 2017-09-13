#pragma warning(disable : 4996)
#include <stdio.h>

int main22(void)
{
	int villa[4][2];
	int popu, i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d類 %d�� 檣掘熱 : ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		popu = 0;
		popu = popu + villa[i][0];
		popu = popu + villa[i][1];
		printf("%d類 檣掘熱 : %d \n", i + 1, popu);
	}

	return 0;
}