#include <stdio.h>

typedef enum syllable {
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
} Syllable;


void Sound(Syllable sy) {
	switch (sy)
	{
	case Do:
		printf("���� �Ͼ� ������"); return;
	case Re:
		printf("���� �ձ� ���ڵ�"); return;
	case Mi:
		printf("�̴� �Ķ� �̳���"); return;
	case Fa:
		printf("�Ĵ� ���� �Ķ���"); return;
	case So:
		printf("���� ���� �ֹ��"); return;
	case La:
		printf("��� �������"); return;
	case Ti:
		printf("�ô� ���� �ó���"); return;
	}

	printf("�� �Բ� �θ���~ �������� �ֶ�õ� �� �� §");
}

int main61(void)
{
	Syllable tone;

	for (tone = Do; tone <= Ti; tone += 1) {
		Sound(tone);
	}

	return 0;
}