//arrayTest.c

#include <stdio.h>
#define ARRSZ 200
int main(void)
{	//�迭����
	int num[ARRSZ + 4] = { 0 };
	int i;
	int Cn = 0;
	for (i = 0; i < ARRSZ; i++)
	{
		printf("%d, input ? (�Է����� : 0) ", i);
		scanf("%d", &num[i]);

		if (num[i] == 0) // �Է°��� 0�ϰ�� For���� ����������.
			break;
		//Cn++; // �Է� ������ŭ Cn�� ���� 
		num[ARRSZ] += num[i];
	}

	Cn = i;

	num[ARRSZ+1] = num[ARRSZ] / Cn;

	num[ARRSZ+2] = num[ARRSZ + 3] = num[0];
	for (i = 1; i < Cn; i++)
	{
		if (num[ARRSZ + 2] < num[i]) //�ִ� ��
			num[ARRSZ + 2] = num[i];
		if (num[ARRSZ + 3] > num[i]) //�ּ� ��
			num[ARRSZ + 3] = num[i];
	}

	printf("\n");
	for (i = 0; i < Cn; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");
	printf("�� : %d, ���: %d \n ", num[ARRSZ], num[ARRSZ + 1]);
	printf("max : %d, min: %d \n ", num[ARRSZ + 2], num[ARRSZ + 3]);

	return 0;
}