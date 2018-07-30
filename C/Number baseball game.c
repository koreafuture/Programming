//숫자야구
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
	for (int count0 = 0; count0 < 3; count0++) // 볼과 스트라이크를 구별하는 방을3개 만든다(난수)
	{
		for (int count1 = 0; count1 < 3; count1++) //  볼과 스트라이크를 구별하는 방을 3개 만든다(입력하는수)

		{
			if (a[count0] == b[count1])// 입력한 값과 난수의 값이 같으면 자리를 비교하는 if문으로 넘어간다
			{
				if (count0 == count1) //자리가 같으면 스트라이크
				{
					strike++;

				}
				else if (count0 != count1)// 자리가 같지않으면 볼
				{
					ball++;

				}
			}
			else if (a[count0] != b[count1]) {//입력한 값과 난수의 값이 다르면 out카운트 증가
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
				printf("다시 입력하세요\n");
				continue;
			}
			else {


				break;
			}//3개의 배열이 정답과 맞는지 볼과 스트라이크 판정함수 불러옴
		}
		compare();
		printf("(%d번째 도전) ", game);
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
		{//3스트라이크일 경우 다시할지 묻는다
			printf("\n");
			printf("\n");
			printf("<%d번도전만에 성공입니다.>\n", game);
			printf("한번 더 도전 하시겠습니까?(y/n)");
			while (1)
			{
				
				scanf_s("%c", &k);
				if (k != 'y' || k != 'n') {
					printf("다시 입력하시오");
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