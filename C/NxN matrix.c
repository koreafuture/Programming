//n*n 행렬식



#include <stdio.h>

int main(void)

{

	int i;

	int j;

	int n;

	printf("행렬을 입력하시오");

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {

		for (j = 1; j <= n; j++) {

			printf("%2d", i + j);
		}

		printf("\n");
	}

	return 0;

}