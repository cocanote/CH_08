//bubbleSort.c

#include <stdio.h>

int main()
{
	int num[5] = { 95,9,67,120,1 };
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");
	
	//sorting
	int tmp;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4-i; j++)
		{
			if (num[j] < num[j+1])	//내림차순
			//if (num[j] > num[j + 1]) //오름차순
			{
				tmp = num[j+1];
				num[j+1] = num[j];
				num[j] = tmp;
			}
		}
	}
	printf("\nSort Result\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");

	return 0;
}