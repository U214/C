/*
	�������� ���α׷��� �ۼ��Ѵ�. 
	����, ����, ����, ���� 4�����̰� 
	�л��� �̼���, ������, ��������, ���� 4���̴�. 
	4 by 4 �迭��  �����ϰ� ����ڷκ��� 4����� 
	4���� ������ �Է¹޾� ������ ���·� ���� �����ϰ� 
	������ ���ϴ� ���α׷��� �ۼ��϶�.
*/

#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char* informationArr[2][4] = { NULL };
	int gradeArr[4][4] = { 0 };
	int subjectTotal = 0, studentTotal = 0, gradeTotal = 0;

	informationArr[0][0] = "�̼���";
	informationArr[0][1] = "������";
	informationArr[0][2] = "��������";
	informationArr[0][3] = "����";

	informationArr[1][0] = "����";
	informationArr[1][1] = "����";
	informationArr[1][2] = "����";
	informationArr[1][3] = "����";

	for (int i = 0; i < 4; i++) {
		printf("%s�� ���� \n", informationArr[0][i]);

		for (int j = 0; j < 4; j++) {
			printf("%s ������ ������ �Է��ϼ��� : ", informationArr[1][j]);
			scanf("%d", &gradeArr[i][j]);
		}
		printf("\n");
	}

	printf("--------------------------------------------------------------\n");
	printf("����");
	
	for (int i = 0; i < 4; i++) {
		printf("%+12s", informationArr[0][i]);
	}
	printf("\t ���� \n");
	printf("--------------------------------------------------------------\n");

	for (int i = 0; i < 4; i++) {
		printf("%s", informationArr[1][i]);

		for (int j = 0; j < 4; j++) {
			printf("%12d", gradeArr[i][j]);
			subjectTotal = subjectTotal + gradeArr[i][j];
		}
		printf("\t %d \n", subjectTotal);
		subjectTotal = 0;
	}

	printf("--------------------------------------------------------------\n");
	printf("����");


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			studentTotal = studentTotal + gradeArr[j][i];
		}
		gradeTotal = gradeTotal + studentTotal;
		printf("%12d", studentTotal);
		studentTotal = 0;
	}
	printf("\t %d \n\n", gradeTotal);

	return 0;
}