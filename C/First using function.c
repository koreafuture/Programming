#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct num
{
	float Re;
	float Im;
}Num;//Num �̶�� ���� ���� ����

Num PlusCnumber(Num *num)
{
	Num number;
	number.Im = num[0].Im + num[1].Im;
	number.Re = num[0].Re + num[1].Re;
	return number;
}
Num ProductCnumber(Num *num)
{
	Num number;
	number.Im = num[0].Im * num[1].Im+ (num[0].Re * -1 * num[1].Re);
	number.Re = num[0].Im * num[1].Re+num[1].Im*num[0].Re;
	return number;
}
void ShowCnumber(Num num)
{
	printf("%f + %fi", num.Im, num.Re);
}



int main(void)
{
	
	Num Cnumber[2];
	printf("���Ҽ��� �Է��Ͻÿ� [�Ǽ� ���] :");
	scanf_s("%f %f", &Cnumber[0].Im, &Cnumber[0].Re);
	printf("���Ҽ��� �Է��Ͻÿ� [�Ǽ� ���] :");
	scanf_s("%f %f", &Cnumber[1].Im, &Cnumber[1].Re);

	printf("\n");
	ShowCnumber(PlusCnumber(Cnumber));
	printf("\n");
	ShowCnumber(ProductCnumber(Cnumber));


}
