/*
	int�� ���� num1�� num2�� ����� ���ÿ� 
	���� 10�� 20���� �ʱ�ȭ�ϰ�,
	int�� ������ ���� ptr1, ptr2 �� �����Ͽ� 
	num1, num2�� ����Ű�� ����.
	ptr1, ptr2�� �̿��ؼ� num1 10����, num2 10������ ���...
	ptr1, ptr2�� ����Ű�� ����� ���� �ٲ��� 15������Ų��.
	�׸��� ptr1, ptr2�� ����Ű�� ������ ����� ���� ��¡�
*/

#include <stdio.h>

int main3(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = NULL;

	*ptr1 = *ptr1 + 10;
	*ptr2 = *ptr2 - 10;

	printf("num1 : %d, num2 : %d \n", num1, num2);

	ptr3 = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;

	*ptr1 = *ptr1 + 15;
	*ptr2 = *ptr2 + 15;

	printf("ptr1�� �� : %d, ptr2�� �� : %d \n", *ptr1, *ptr2);

	return 0;
}