//동적할당을 이용한 달팽이 배열
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	int num = 0;
	int i = 0, j = 0, k = 0;

	printf("수 입력");
	scanf_s("%d", &N);
	int w = N;//N이 바뀌는 코드를 짯기때문에 w에 N을 저장해놓는다


	int **arr = (int**)malloc(sizeof(int) * N);//malloc = memory allocation(메모리 할당), sizeof = size of int(배열 한칸이 모두 int이다
	
	for (int z = 0; z < N; z++) 
	{
		arr[z] = (int*)malloc(sizeof(int) * N);
	}

	for (i; i < N; i++)
	{
		for (j; j < N; j++)//ㄱ모양의 가로 행렬출력
		{
			num++;
			arr[i][j] = num;

		}
		j--;
		i++;
		
		for (i; i < N; i++)//ㄱ 모양의 세로 행렬 출력
		{
			num++;
			arr[i][j] = num;

		}
		i--;
		
		for (j = N - 2; j >= k; j--)//ㄴ모양의 가로 출력
		{
			num++;
			arr[i][j] = num;
		}

		j++;
		k++;
		for (i = N - 2; i >= k; i--)//ㄴ모양의 세로 출력
		{
			num++;
			arr[i][j] = num;
		}
		N--;
		j++;
		if(num==w*w)//w*w면 break;
		{
			break;
		}		
	}
	
for (int z = 0; z < w; z++)//배열 arr[0][0] ~ arr[w-1][w-1]까지 실핼
	{
		for (int x = 0; x < w; x++)
		{
			printf("%3d", arr[z][x]);
		}
		printf("\n");
	}
	for (int c = 0; c < w; c++)//2차원 동적할당 해지
	{
		free(arr[c]);
	}
	free(arr);
}