//���̼���
#include <stdio.h>

int main()
{
	int a[30];

	int i;

	printf("������ �Է��Ͻÿ�\n");//���� �Է�

	for (i = 0; i < 30; i++)

	{
		scanf_s("%d", &a[i]);//�迭�� �Է��ϴٰ� 0�� �Է��ϰԵǸ� for���� �����Ѵ�.

		if (a[i] == 0)

		{
			break;
		}
	}

	int count = 1;

	for (int j = 0; j < i; j++)//for���� i���� ���������� �����Ų��

	{
		if (a[j] == a[j + 1])//a[j]��a[j+1]�� ���ٸ� count�� 1 ������Ų��

		{
			count++;
		}

		else

		{
			printf("%3d%3d", a[j], count);

			count = 1;
		}
	}//���� �׷��� �ʴٸ� a[j]�� count�� ����ϰ� count�� 1�� �ʱ�ȭ ��Ų��.
}
