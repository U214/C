#include <stdio.h>

typedef enum syllable {
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
} Syllable;


void Sound(Syllable sy) {
	switch (sy)
	{
	case Do:
		printf("도는 하얀 도라지"); return;
	case Re:
		printf("레는 둥근 레코드"); return;
	case Mi:
		printf("미는 파란 미나리"); return;
	case Fa:
		printf("파는 예쁜 파랑새"); return;
	case So:
		printf("솔은 작은 솔방울"); return;
	case La:
		printf("라는 라디오고요"); return;
	case Ti:
		printf("시는 졸졸 시냇물"); return;
	}

	printf("다 함께 부르세~ 도레미파 솔라시도 솔 도 짠");
}

int main61(void)
{
	Syllable tone;

	for (tone = Do; tone <= Ti; tone += 1) {
		Sound(tone);
	}

	return 0;
}