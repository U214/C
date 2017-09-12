/*
	길이가 6인 int형 배열을 선언하여 
	1,2,3,4,5,6 으로 초기화 한다.
	새로운 배열을 생성하여 저장된 값의 순서를 
	뒤집어 저장하는 프로그램을 작성하시오.

	작성 방식은 포인터의 증가, 감소 형태로~
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