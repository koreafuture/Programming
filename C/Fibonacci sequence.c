//피보나치 수열
#include <stdio.h>




int main(void)
{
	int a = 1, b = 1, c;
	int n;
	printf("값을 입력하시오");//출력하고자하는 값을 입력
	scanf_s("%d", &n);

	for (int i = 0; i < n - 2; i++) //이미 선언된 1,2,번째 항을 빼고 반복한다
	{
		c = a + b;//피보나치 수열 a+b를 한후에 a에 전에 있던 b대입하고 b에는 전에 있던 c를 대입한다.
		a = b;
		b = c;

	}

	printf("%d번째 항의 값은%d이다", n, c);// 피보나치 수열을 출력한다.
	return 0;

}
