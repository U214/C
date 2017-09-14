#include <stdio.h>

int main31(void)
{
	int ch;

	while (1) {
		ch = getchar();
		
		if (ch == EOF) {
			break;
		}

		putchar(ch);
	}

	return 0;
}

// EOF - ctrl + z (À©µµ¿ì)