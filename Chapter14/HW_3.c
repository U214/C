/*
	ȸ��(Palindrome)�� �� or �ڿ��� �о ������ �ܾ ���Ѵ�.
	noon, level �� ���� �ܾ���� ȸ���� ���Ѵ�.
	����ڷκ��� ���ڿ��� �Է¹����� ȸ������ �ƴ��� 
	�Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
	��ҹ��ڱ��� �����ؾ� ȸ������ ������.
	��¿���)
	�ܾ �Է��Ͻÿ�. : noon
	ȸ���Դϴ�.
	�ܾ �Է��Ͻÿ�. : love
	ȸ���� �ƴմϴ�.
*/

#pragma warning(disable : 4996)
#include <stdio.h>

int main19(void)
{
	int length = 0;
	char str[50], flag = 'y';

	printf("�ܾ �Է��Ͻÿ� : ");
	scanf("%s", str);

	while (str[length] != '\0') {
		length++;
	}

	for (int i = 0; i < length / 2; i++) {
		if (str[i] != str[length - i - 1]) {
			flag = 'n';
		}
	}

	if (flag == 'y') {
		printf("ȸ���Դϴ�. \n");
	}
	else {
		printf("ȸ���� �ƴմϴ�. \n");
	}

	return 0;
}