#include<stdio.h>

void print_line(void);

int main(void)
{
	print_line();				//함수 호출
	printf("학번         이름           전공             학점            \n");
	print_line();
}

void print_line(void)
{
	int i;
	for (i = 0; i < 50;i++)
	{
		printf("-");
	}
	printf("\n");					//""로 감싸기 ''문자열 취급 받음
}