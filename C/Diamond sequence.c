//���̾Ƹ��



#include <stdio.h>

int main(void)

{
	int i, j, count0;

	printf("������ �Է��Ͻÿ�(Ȧ����)");
	scanf_s("%d", &count0);

	//���̾Ƹ�� ���
	for (i = 1; i <= count0 / 2 + 1; i++)
	{

		for (j = 0; j < count0 / 2 + 1 - i; j++) // ���� �Է�
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) //*�Է�
		{

			printf("*");
		}
		printf("\n");

	}
	//���̾Ƹ�� �ϴ�
	for (i = 1; i <= count0 / 2; i++)//�Ųٷ�
	{

		for (j = 1; j <= i; j++)  // ���� �Է�
		{
			printf(" ");

		}

		for (j = count0 - 2; j >= 2 * i - 1; j--)
		{
			printf("*");
		}//�� ���
		printf("\n");//�ٹٲ�
	}

}