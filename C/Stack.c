
//���� ���α׷�
#include <stdio.h>

int main()
{

	int a[10];//�迭 ũ������

	printf("===== �޴� =====\nPUSH = 1 \n POP = 2 \nSHOW = 3\n(�����Ϸ��� 1,2,3���� �����Է�)\n");
	int i = 0;
	int k;
	
	while(1)//���ѷ���
	{
		printf("�޴��� �Է��Ͻÿ� : ");//�޴��� �Է¹޴´�
		scanf_s("%d", &k);
		
		switch (k)
		{
		case 1://k��1�̶�� �迭�� ���� �Է��ϰ� �״��� �迭ĭ�� �����
			printf("�� �Է� : ");
			scanf_s("%d", &a[i]);
			i++;			
			break;
		
		case 2://k��2��� ��������迭�� �����Ѵ�
			i--;
			break;
		
		case 3://k��3�̶�� ���²� ������ִ� �迭�� ����Ѵ�
			for (int num = 0; num < i; num++)
			{
				printf("%d ", a[num]);
			}
			
			break;

		default://�׿��� ���ڸ� �Է��ϰԵǸ� ������ �����
			
			return 0;
			break;

		}
	}

}
