/*
	���̰� 10�� �迭�� �����ϰ� �� 10���� ������ 
	�Է¹޾Ƽ� Ȧ���� ¦���� �����ؼ� ����϶�.
	��¿���) �� 10���� ���ڸ� �Է��Ͻÿ�.
	1 2 3 ....... 10���Է�
	Ȧ����� : 1, 3, 5, 7, 9
	¦����� : 2, 4, 6, 8, 10
*/
#pragma warning(disable : 4996)
#include <stdio.h>

int main17(void)
{
	int arr[10], evenArr[10], oddArr[10], evenCnt = 0, oddCnt = 0;

	printf("�� 10���� ���ڸ� �Է��Ͻÿ�. \n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] % 2 == 0) {
			evenArr[evenCnt] = arr[i];
			evenCnt++;
		}
		else {
			oddArr[oddCnt] = arr[i];
			oddCnt++;
		}
	}

	printf("Ȧ�� ��� : ");
	for (int i = 0; i < oddCnt; i++) {
		printf("%d ", oddArr[i]);
	}

	printf("\n¦�� ��� : ");
	for (int i = 0; i < evenCnt; i++) {
		printf("%d ", evenArr[i]);
	}
	printf("\n");

	return 0;
}