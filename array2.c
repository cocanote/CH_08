#include <stdio.h>

#define Arr_SZ 5
int main()
{
	int i;
	//1. �迭�� ����� �����Ѵ�.
	int a1[5];
	int a2[Arr_SZ];
	int n = 5;
	//int a3[n];
	const int m = 5;
	//int a4[m];

	//2. �迭 ����� �迭 ���������� ������ �� ����.
	int x1[5] = { 1,2,3,4,5 };
	int x2[5];

	//x2 = x1; x2�� �����ͻ�� �̱⶧���� ���� �ٲ� �� ����. like a const

	for (i = 0; i < 5; i++)
	{
		x2[i] = x1[i];
		printf("%d, ", x2[i]);
	}
	printf("\n");

	int x3[5] = { 100,200 };
	//int x[20][50] = {0}; �ʱ�ȭ ���� ������ ������ ������ �׻� 0�� ����
	//int x3[5] = { 100,200,300,400,500 };
	for (i = 0; i < 5; i++)
		printf("%d, ", x3[i]);
	printf("\n");

	//4.�������� �迭 (�迭�� ����� ���ÿ� �ʱ�ȭ�� �� ����)
	int x4[] = { 100,200,300,400,500,600,700,800,900};

	//int x5[][6] = { 1,2,3,4 };
	
	for (i = 0; i < sizeof(x4)/sizeof(x4[0]); i++)
		printf("%d, ", x4[i]);
	printf("\n");

	printf("x4 sizeof: %d \n", sizeof(x4));
	return 0;
}