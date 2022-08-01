#include <stdio.h>

void heading();
int main()
{
	//char name[3][20]; //2Â÷¿ø ¹è¿­
	//int i;

	//for (i = 0; i < 3; i++)
	//{
	//	printf("input name ?");
	//	gets(name[i]);
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	printf("name : %s \n", name[i]);
	//}
	//

	int score[5][7] = {
		{56, 90, 40, 54},
		{66, 53, 48, 75},
		{42, 94, 40, 80},
		{57, 45, 70, 79},
		{92, 90, 60, 75}
	};

	char stdNames[5][20] = { "È«±æµ¿","¼ºÃáÇâ","ÀÌ¸ù·æ","±î²áÀÌ","Áø´Þ·¡" };

	int i, j;

	//ÃÑÁ¡ Æò±Õ
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			score[i][4] += score[i][j];
		}
		score[i][5] = score[i][4] / 4;
	}

	//¼®Â÷
	for (i = 0; i < 5; i++)
	{
		score[i][6] = 1;
		for (j = 0; j < 5; j++)
		{
			if (score[i][5] < score[j][5])
				score[i][6]++;
		}
	}

	heading();

	for (i = 0; i < 5; i++)
	{
		printf("%s, ", stdNames[i]);
		for (j = 0; j < 7; j++)
		{
			printf("%3d, ",score[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void heading()
{
	printf("=======================================\n");
	printf("¼º¸í ±¹¾î ¿µ¾î ¼öÇÐ °úÇÐ | ÃÑÁ¡ Æò±Õ ¼®Â÷ \n");
	printf("=======================================\n");
}