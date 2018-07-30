#include <stdio.h>

int main()

{
	int a[10];//배열의 길이 정의

	printf("정수 10개를 입력하시오");
	int i;

	for (i = 0; i <10; i++) //정수 10개를 입력 받음
	{
		scanf_s("%d", &a[i]);

	}

	int  j, k, temp;
	for (j = 0; j < 10; j++) //배열 a[0]부터 배열a[9] 까지 각각을 비교함
	{

		for (k = j + 1; k <10; k++) //배열 a[0]과 a[1~9]을 비교

		{
			if (a[j] > a[k]) //조건문을 만족한다면 temp에 배열[j]를 저장하고 배열[j]에 배열[k]를 저장하고 배열[k]에는 temp에 저장되있던 값을 저장하여 두 수의 자리를 바꾼다.
			{
				temp = a[j];
				a[j] = a[k];
				a[k] = temp;
			}
		}


	}printf("오름 차순으로 정리된 값은? \n"); //정리되어진 배열을 출력함
	for (int num = 0; num < 10; num++)
	{
		printf("%4d", a[num]);

	}

}
