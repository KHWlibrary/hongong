#include<stdio.h>

int sum(int x, int y);

int main(void)
{
	int a = 19, b = 21;
	int result;

	result = sum(a, b);
	printf("result = %d\n", result);

	return 0;
}

int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}