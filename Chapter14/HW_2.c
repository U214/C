/*
	���̰� 10�� �迭�� �������� �� 10���� ������ �Է¹޴´�.
	�� Ȧ���� �迭�� �տ��� ���� ä�������� 
	¦���� �迭�� ���������� ä��������.
	��¿���) �� 10���� ������ �Է��Ͻÿ�.
	1 2 3 4 5 6 7 8 9 10
	��� : 1 3 5 7 9 10 8 6 4 2
*/

#pragma warning(disable : 4996)
#include <stdio.h>

int main18(void)
{
	int arr[10], inputNum, evenCnt = 9, oddCnt = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &inputNum);

		if (inputNum % 2 == 0) {
			arr[evenCnt] = inputNum;
			evenCnt--;
		}
		else {
			arr[oddCnt] = inputNum;
			oddCnt++;
		}
	}

	printf("��� : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}