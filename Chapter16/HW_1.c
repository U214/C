/*
	���ΰ� 9, ���ΰ� 3�� int�� 2���� �迭�� �����Ͽ� 
	������ �� 2, 3, 4���� �����Ѵ�.
	�׸��� ����� ������ �Ǿ����� Ȯ���ϱ� ���� 
	����� �ϴ� ���α׷��� �ۼ��϶�
*/
#include <stdio.h>

int main27(void)
{
	int arr[3][9] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i + 2)*(j + 1);
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("%d�� \n", i + 2);

		for (int j = 0; j < 9; j++) {
			printf("%d * %d = %d \n", i + 2, j + 1, arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}