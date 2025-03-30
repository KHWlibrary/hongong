//재귀함수를 이용해 1부터 100까지 더하기
#include<stdio.h>

int rec_fuc(int n);

int main(void)
{
	int sum = rec_fuc(1);	
	printf("1부터 100까지 합은 %d입니다\n", sum);
	return 0;
}

int rec_fuc(int n)
{
	if (n > 100)
	{
		return 0;
	}

	return n + rec_fuc(n + 1);
}