/*
	��������
	10�� �Է�, �������� / ��������
*/
#pragma warning(disable : 4996)
#include <stdio.h>

int main20(void)
{
	int temp = 0, endFlagNum = 0, asceArr[10] = { 0 }, descArr[10] = { 0 };

	for (int i = 0; i < sizeof(asceArr) / sizeof(int); i++) {
		printf("%d�� ���ڸ� �Է��ϼ��� : ", i+1);
		scanf("%d", &asceArr[i]);
		descArr[i] = asceArr[i];
	}

	printf("�������� ���� : ");
	endFlagNum = sizeof(asceArr) / sizeof(int);

	for (int i = 0; i < endFlagNum; i++) {
		if (i == endFlagNum - 1) {
			endFlagNum  = endFlagNum - 1;
			i = -1;
			continue;
		}

		if (asceArr[i] > asceArr[i + 1]) {
			temp = asceArr[i];
			asceArr[i] = asceArr[i + 1];
			asceArr[i + 1] = temp;
		}
	}

	for (int i = 0; i < sizeof(asceArr) / sizeof(int); i++) {
		printf("%d ", asceArr[i]);
	}

	printf("\n�������� ���� : ");
	endFlagNum = sizeof(descArr) / sizeof(int);

	for (int i = 0; i < endFlagNum; i++) {
		if (i == endFlagNum - 1) {
			endFlagNum = endFlagNum - 1;
			i = -1;
			continue;
		}

		if (descArr[i] < descArr[i + 1]) {
			temp = descArr[i];
			descArr[i] = descArr[i + 1];
			descArr[i + 1] = temp;
		}
	}

	for (int i = 0; i < sizeof(descArr) / sizeof(int); i++) {
		printf("%d ", descArr[i]);
	}

	printf("\n");
	return 0;
}