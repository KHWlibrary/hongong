#include<stdio.h>

void print_line(void);

int main(void)
{
	print_line();				//�Լ� ȣ��
	printf("�й�         �̸�           ����             ����            \n");
	print_line();
}

void print_line(void)
{
	int i;
	for (i = 0; i < 50;i++)
	{
		printf("-");
	}
	printf("\n");					//""�� ���α� ''���ڿ� ��� ����
}