/*
	�켱 �Ʒ��� ���� ������ �����迭 A�� �����Ѵ�. 
	�׸��� A�迭�� �ʱⰪ�� �̿��ؼ� �����迭 B�� 
	�ʱ�ȭ�ϴ� ���α׷��� �ۼ��Ͻÿ�

	int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
	int arr2[4][2];
*/

#include <stdio.h>

int main28(void)
{
	int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
	int arr2[4][2] = { 0 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			arr2[j][i] = arr1[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("arr2[%d][%d] = %d \n", i, j, arr2[i][j]);
		}
	}

	return 0;
}