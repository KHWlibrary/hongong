#include<stdio.h>

int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double aveg;

	for (i = 0;i < 5;i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 0;i < 5;i++)
	{
		total += score[i];
	}
	aveg = total / 5.0;

	for (i = 0;i < 5;i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� :%.1lf\n", aveg);

	return 0;
}