/*
#pragma warning(disable : 4996)
#include <stdio.h>

char name[30];

char* ReadUserName(void) {
	printf("What's your name? ");
	gets(name);

	return name;
}

int main71(void)
{
	char* name1;
	char* name2;

	name1 = ReadUserName();
	printf("name1 : %s \n", name1);

	name2 = ReadUserName();
	printf("name2 : %s \n", name2);

	return 0;
}

// 둘이 동일한 값
*/