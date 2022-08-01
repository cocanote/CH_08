//array3.c

#include <stdio.h>

int main()
{
	char ch = 'a', i;
	char str[10] = "king dom"; // 1차원 문자배열은 무자열을 하나 저장한다.

	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));
	printf("%c, %p, %p \n", str[0], &str[0], str);


	printf("str : %p, %s \n", str, str);
	printf("str : %p, \n", str);

	printf(" input String ? ");
	//scanf("%s", str);
	gets(str);
//	fgets(str, 10, stdin);
	printf("str : %p, %s", str, str);

	printf("\n");
	
	for (i = 0; i < 10; i++)
	{
		printf("%p, %c, %d\n", &str[i], str[i], str[i]);
	}

	return 0;
}