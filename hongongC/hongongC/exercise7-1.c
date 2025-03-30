#include<stdio.h>

float centi_to_meter(float stature);		//함수 선언

int main(void)
{
	float a = 187;
	float result;
	result = centi_to_meter(a);
	printf("result = %2fm\n", result);				

	return 0;
}

float centi_to_meter(float stature)		//함수 정의 시작
{
	float temp;						//필요한 변수 선언
	temp = stature/100;				//매개변수 cm값을 m 환산
	return temp;					//환산된 값 반환
}




//출력할때 %2f인거 확인하기