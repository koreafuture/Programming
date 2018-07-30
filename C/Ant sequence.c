//개미수열
#include <stdio.h>

int main()
{
	int a[30];

	int i;

	printf("정수를 입력하시오\n");//정수 입력

	for (i = 0; i < 30; i++)

	{
		scanf_s("%d", &a[i]);//배열을 입력하다가 0을 입력하게되면 for문을 정지한다.

		if (a[i] == 0)

		{
			break;
		}
	}

	int count = 1;

	for (int j = 0; j < i; j++)//for문을 i보다 작을때까지 실행시킨다

	{
		if (a[j] == a[j + 1])//a[j]와a[j+1]이 같다면 count를 1 증가시킨다

		{
			count++;
		}

		else

		{
			printf("%3d%3d", a[j], count);

			count = 1;
		}
	}//만약 그렇지 않다면 a[j]와 count를 출력하고 count를 1로 초기화 시킨다.
}
