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

// �迭 ��ü ũ�� ���� ���� ġ�� ���ۿ� ���� �Է��Ѱ� �����־
// ���� ��¶� ���� ������ ���´�.