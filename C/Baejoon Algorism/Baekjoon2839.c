//숫자를 입력했을때 3, 5를 조합하여 가장 적은 횟수를 찾는다 만약 조합이 되지 않는 숫자라면 -1이 출력된다
#include <stdio.h>

int main()
{
	int N,i=0;
	printf("Kg을 입력하시오\n");
	scanf_s("%d", &N);
	while (1)
	{
		if (N % 5 == 0)
		{
			printf("%d", N / 5 + i);
			return 0;
		}
		N -= 3;
		i++;
		if (N <= 0)
		{
			printf("-1");
			return 0;
		}
	}
}
 
