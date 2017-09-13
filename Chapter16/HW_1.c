/*
	가로가 9, 세로가 3인 int형 2차원 배열을 선언하여 
	구구단 중 2, 3, 4단을 저장한다.
	그리고 제대로 저장이 되었는지 확인하기 위해 
	출력을 하는 프로그램을 작성하라
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
		printf("%d단 \n", i + 2);

		for (int j = 0; j < 9; j++) {
			printf("%d * %d = %d \n", i + 2, j + 1, arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}