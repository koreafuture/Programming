//�����Ҵ��� �̿��� ������ �迭
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	int num = 0;
	int i = 0, j = 0, k = 0;

	printf("�� �Է�");
	scanf_s("%d", &N);
	int w = N;//N�� �ٲ�� �ڵ带 ­�⶧���� w�� N�� �����س��´�


	int **arr = (int**)malloc(sizeof(int) * N);//malloc = memory allocation(�޸� �Ҵ�), sizeof = size of int(�迭 ��ĭ�� ��� int�̴�
	
	for (int z = 0; z < N; z++) 
	{
		arr[z] = (int*)malloc(sizeof(int) * N);
	}

	for (i; i < N; i++)
	{
		for (j; j < N; j++)//������� ���� ������
		{
			num++;
			arr[i][j] = num;

		}
		j--;
		i++;
		
		for (i; i < N; i++)//�� ����� ���� ��� ���
		{
			num++;
			arr[i][j] = num;

		}
		i--;
		
		for (j = N - 2; j >= k; j--)//������� ���� ���
		{
			num++;
			arr[i][j] = num;
		}

		j++;
		k++;
		for (i = N - 2; i >= k; i--)//������� ���� ���
		{
			num++;
			arr[i][j] = num;
		}
		N--;
		j++;
		if(num==w*w)//w*w�� break;
		{
			break;
		}		
	}
	
for (int z = 0; z < w; z++)//�迭 arr[0][0] ~ arr[w-1][w-1]���� ����
	{
		for (int x = 0; x < w; x++)
		{
			printf("%3d", arr[z][x]);
		}
		printf("\n");
	}
	for (int c = 0; c < w; c++)//2���� �����Ҵ� ����
	{
		free(arr[c]);
	}
	free(arr);
}