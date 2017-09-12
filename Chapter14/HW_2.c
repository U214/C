/*
	길이가 10인 배열을 선언한후 총 10개의 정수를 입력받는다.
	단 홀수는 배열의 앞에서 부터 채워나가고 
	짝수는 배열의 끝에서부터 채워나간다.
	출력예시) 총 10개의 정수를 입력하시오.
	1 2 3 4 5 6 7 8 9 10
	결과 : 1 3 5 7 9 10 8 6 4 2
*/

#pragma warning(disable : 4996)
#include <stdio.h>

int main18(void)
{
	int arr[10], inputNum, evenCnt = 9, oddCnt = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("정수를 입력하시오 : ");
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

	printf("결과 : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}