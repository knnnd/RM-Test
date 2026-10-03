#include<stdio.h>
int main(void)
{
	printf("Please input 8 numbers:");
	int number[8];
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		scanf_s("%d", &number[i]);
	}
	int j = 0;
	for (i = 7; i >= 0; i--)
	{
		for (j = 1; j <= i; j++)
		{
			if (number[j - 1] > number[j])
			{
				int tmp = number[j];
				number[j] = number[j - 1];
				number[j - 1] = tmp;
			}
		}
	}
	printf("\nAftter sorting:");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", number[i]);
	}
	return 0;
}