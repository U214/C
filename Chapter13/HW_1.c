/*
	���̰� 6�� int�� �迭�� �����Ͽ� 
	1,2,3,4,5,6 ���� �ʱ�ȭ �Ѵ�.
	���ο� �迭�� �����Ͽ� ����� ���� ������ 
	������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�ۼ� ����� �������� ����, ���� ���·�~
*/
#include <stdio.h>

int main12(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int reverseArr[6];

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		*(reverseArr + i) = *(arr + (sizeof(arr) / sizeof(int) - i - 1));
	}

	for (int i = 0; i < sizeof(reverseArr) / sizeof(int); i++) {
		printf("reverseArr[%d] : %d \n", i, reverseArr[i]);
	}

	return 0;
}