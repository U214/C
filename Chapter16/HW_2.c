/*
	우선 아래와 같은 형태의 좌측배열 A를 선언한다. 
	그리고 A배열의 초기값을 이용해서 우측배열 B를 
	초기화하는 프로그램을 작성하시오

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