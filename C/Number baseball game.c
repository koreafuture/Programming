//���ھ߱�
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int a[3] = { 0 };
int b[3] = { 0 };
int strike;
int ball;
int out;
int score;
int game = 1;
char k;

void random(void)
{
	srand((unsigned int)time(NULL));

	a[0] = rand() % 9 + 1;
	a[1] = rand() % 10;
	a[2] = rand() % 10;

	while (a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) {
		a[1] = rand() % 10;
		a[2] = rand() % 10;
	}
}

void enter(void) {

	b[0] = (score / 100);
	b[1] = ((score % 100) / 10);
	b[2] = ((score % 100) % 10);
}

void compare(void) {
	for (int count0 = 0; count0 < 3; count0++) // ���� ��Ʈ����ũ�� �����ϴ� ����3�� �����(����)
	{
		for (int count1 = 0; count1 < 3; count1++) //  ���� ��Ʈ����ũ�� �����ϴ� ���� 3�� �����(�Է��ϴ¼�)

		{
			if (a[count0] == b[count1])// �Է��� ���� ������ ���� ������ �ڸ��� ���ϴ� if������ �Ѿ��
			{
				if (count0 == count1) //�ڸ��� ������ ��Ʈ����ũ
				{
					strike++;

				}
				else if (count0 != count1)// �ڸ��� ���������� ��
				{
					ball++;

				}
			}
			else if (a[count0] != b[count1]) {//�Է��� ���� ������ ���� �ٸ��� outī��Ʈ ����
				out++;
			}
		}
	}
}

int main()
{
	printf("==========>>>NUMBER BASEBALL<<<==========\n");
	printf("\n");

	random();
	while (1)
	{

		printf("Enter the value:");


		while (1)
		{
			scanf_s("%d", &score);
			enter();
			if (score >= 1000 || b[0] == b[1] || b[0] == b[2] || b[1] == b[2])
			{
				printf("�ٽ� �Է��ϼ���\n");
				continue;
			}
			else {


				break;
			}//3���� �迭�� ����� �´��� ���� ��Ʈ����ũ �����Լ� �ҷ���
		}
		compare();
		printf("(%d��° ����) ", game);
		if (out == 9)
		{
			printf("OUT\n");

		}
		else
		{
			printf("STRIKE: %-3d", strike);
			printf("BALL: %-3d", ball);
			printf("\n");

		}


		if (strike == 3)
		{//3��Ʈ����ũ�� ��� �ٽ����� ���´�
			printf("\n");
			printf("\n");
			printf("<%d���������� �����Դϴ�.>\n", game);
			printf("�ѹ� �� ���� �Ͻðڽ��ϱ�?(y/n)");
			while (1)
			{
				
				scanf_s("%c", &k);
				if (k != 'y' || k != 'n') {
					printf("�ٽ� �Է��Ͻÿ�");
					continue;
					
				}

				else
				{
					break;
				}
			}
			if (k == 'y') {
				game = 0;
				random();
				return main;
			}
		}
		else if (k == 'n')
		{
			break;
		}


		strike = 0;
		ball = 0;
		out = 0;
		game++;
		printf("\n");
	}
	return 0;
}