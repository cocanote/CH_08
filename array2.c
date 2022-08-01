#include <stdio.h>

#define Arr_SZ 5
int main()
{
	int i;
	//1. 배열은 상수로 선언한다.
	int a1[5];
	int a2[Arr_SZ];
	int n = 5;
	//int a3[n];
	const int m = 5;
	//int a4[m];

	//2. 배열 복사는 배열 변수명으로 복사할 수 없다.
	int x1[5] = { 1,2,3,4,5 };
	int x2[5];

	//x2 = x1; x2는 포인터상수 이기때문에 값을 바꿀 수 없다. like a const

	for (i = 0; i < 5; i++)
	{
		x2[i] = x1[i];
		printf("%d, ", x2[i]);
	}
	printf("\n");

	int x3[5] = { 100,200 };
	//int x[20][50] = {0}; 초기화 값을 저장한 나머지 영역은 항상 0을 보장
	//int x3[5] = { 100,200,300,400,500 };
	for (i = 0; i < 5; i++)
		printf("%d, ", x3[i]);
	printf("\n");

	//4.언사이즈드 배열 (배열이 선언과 동시에 초기화될 때 가능)
	int x4[] = { 100,200,300,400,500,600,700,800,900};

	//int x5[][6] = { 1,2,3,4 };
	
	for (i = 0; i < sizeof(x4)/sizeof(x4[0]); i++)
		printf("%d, ", x4[i]);
	printf("\n");

	printf("x4 sizeof: %d \n", sizeof(x4));
	return 0;
}