#pragma warning(disable : 4996)
#include <stdio.h>

char* ReadUserName(void) {
	char* name = (char*)malloc(sizeof(char) * 30);
	printf("What's your name? ");
	gets(name);

	return name;
}

int main73(void)
{
	char* name1;
	char* name2;

	name1 = ReadUserName();
	printf("name1 : %s \n", name1);

	name2 = ReadUserName();
	printf("name2 : %s \n", name2);

	printf("re name1 : %s \n", name1);
	printf("re name2 : %s \n", name2);

	free(name1);
	free(name2);

	return 0;
}