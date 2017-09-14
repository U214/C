/*
	성적관리 프로그램을 작성한다. 
	국어, 영어, 수학, 국사 4과목이고 
	학생은 이순신, 강감찬, 을지문덕, 권율 4명이다. 
	4 by 4 배열을  선언하고 사용자로부터 4사람의 
	4과목 점수를 입력받아 다음의 형태로 값을 저장하고 
	총점을 구하는 프로그램을 작성하라.
*/

#pragma warning(disable : 4996)
#include <stdio.h>

int main29(void)
{
	char* informationArr[2][4] = { NULL };
	int gradeArr[4][4] = { 0 };
	int subjectTotal = 0, studentTotal = 0, gradeTotal = 0;

	informationArr[0][0] = "이순신";
	informationArr[0][1] = "강감찬";
	informationArr[0][2] = "을지문덕";
	informationArr[0][3] = "권율";

	informationArr[1][0] = "국어";
	informationArr[1][1] = "영어";
	informationArr[1][2] = "수학";
	informationArr[1][3] = "국사";

	for (int i = 0; i < 4; i++) {
		printf("%s의 성적 \n", informationArr[0][i]);

		for (int j = 0; j < 4; j++) {
			printf("%s 과목의 점수를 입력하세요 : ", informationArr[1][j]);
			scanf("%d", &gradeArr[i][j]);
		}
		printf("\n");
	}

	printf("--------------------------------------------------------------\n");
	printf("구분");
	
	for (int i = 0; i < 4; i++) {
		printf("%+12s", informationArr[0][i]);
	}
	printf("\t 총점 \n");
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
	printf("총점");


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