#include<stdio.h>


void sum(int k);

int main(void)
{
	int k;
	sum(10);
	sum(100);
	return 0;
}

void sum(int k)
{
	int i;
	int result = 0;
	for (i = 0; i <= k;i++)
	{
		result += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", k, result);
}