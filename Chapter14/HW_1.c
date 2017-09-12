/*
	길이가 10인 배열을 선언하고 총 10개의 정수를 
	입력받아서 홀수와 짝수를 구분해서 출력하라.
	출력예시) 총 10개의 숫자를 입력하시오.
	1 2 3 ....... 10개입력
	홀수출력 : 1, 3, 5, 7, 9
	짝수출력 : 2, 4, 6, 8, 10
*/
#pragma warning(disable : 4996)
#include <stdio.h>

int main17(void)
{
	int arr[10], evenArr[10], oddArr[10], evenCnt = 0, oddCnt = 0;

	printf("총 10개의 숫자를 입력하시오. \n");
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

	printf("홀수 출력 : ");
	for (int i = 0; i < oddCnt; i++) {
		printf("%d ", oddArr[i]);
	}

	printf("\n짝수 출력 : ");
	for (int i = 0; i < evenCnt; i++) {
		printf("%d ", evenArr[i]);
	}
	printf("\n");

	return 0;
}