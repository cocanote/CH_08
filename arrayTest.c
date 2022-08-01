//arrayTest.c

#include <stdio.h>
#define ARRSZ 200
int main(void)
{	//배열변수
	int num[ARRSZ + 4] = { 0 };
	int i;
	int Cn = 0;
	for (i = 0; i < ARRSZ; i++)
	{
		printf("%d, input ? (입력종료 : 0) ", i);
		scanf("%d", &num[i]);

		if (num[i] == 0) // 입력값이 0일경우 For문을 빠져난간다.
			break;
		//Cn++; // 입력 개수만큼 Cn을 증가 
		num[ARRSZ] += num[i];
	}

	Cn = i;

	num[ARRSZ+1] = num[ARRSZ] / Cn;

	num[ARRSZ+2] = num[ARRSZ + 3] = num[0];
	for (i = 1; i < Cn; i++)
	{
		if (num[ARRSZ + 2] < num[i]) //최대 값
			num[ARRSZ + 2] = num[i];
		if (num[ARRSZ + 3] > num[i]) //최소 값
			num[ARRSZ + 3] = num[i];
	}

	printf("\n");
	for (i = 0; i < Cn; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");
	printf("합 : %d, 평균: %d \n ", num[ARRSZ], num[ARRSZ + 1]);
	printf("max : %d, min: %d \n ", num[ARRSZ + 2], num[ARRSZ + 3]);

	return 0;
}