#include<stdio.h>

float centi_to_meter(float stature);		//�Լ� ����

int main(void)
{
	float a = 187;
	float result;
	result = centi_to_meter(a);
	printf("result = %2fm\n", result);				

	return 0;
}

float centi_to_meter(float stature)		//�Լ� ���� ����
{
	float temp;						//�ʿ��� ���� ����
	temp = stature/100;				//�Ű����� cm���� m ȯ��
	return temp;					//ȯ��� �� ��ȯ
}




//����Ҷ� %2f�ΰ� Ȯ���ϱ�