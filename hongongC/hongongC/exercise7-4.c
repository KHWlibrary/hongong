//����Լ��� �̿��� 1���� 100���� ���ϱ�
#include<stdio.h>

int rec_fuc(int n);

int main(void)
{
	int sum = rec_fuc(1);	
	printf("1���� 100���� ���� %d�Դϴ�\n", sum);
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