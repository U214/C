#include <stdio.h>

int main33(void)
{
	char str[7];
	int i;

	for (i = 0; i < 4; i++) {
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}

	return 0;
}

// 배열 전체 크기 보다 많이 치면 버퍼에 아직 입력한게 남아있어서
// 다음 출력때 남은 내용이 나온다.