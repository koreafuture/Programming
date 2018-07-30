//다이아몬드



#include <stdio.h>

int main(void)

{
	int i, j, count0;

	printf("정수를 입력하시오(홀수만)");
	scanf_s("%d", &count0);

	//다이아몬드 상단
	for (i = 1; i <= count0 / 2 + 1; i++)
	{

		for (j = 0; j < count0 / 2 + 1 - i; j++) // 공백 입력
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) //*입력
		{

			printf("*");
		}
		printf("\n");

	}
	//다이아몬드 하단
	for (i = 1; i <= count0 / 2; i++)//거꾸로
	{

		for (j = 1; j <= i; j++)  // 공백 입력
		{
			printf(" ");

		}

		for (j = count0 - 2; j >= 2 * i - 1; j--)
		{
			printf("*");
		}//별 출력
		printf("\n");//줄바꿈
	}

}