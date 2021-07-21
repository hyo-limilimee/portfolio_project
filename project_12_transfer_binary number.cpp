//transfer decimal number to binary number

#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num;
	
	int j;

	for (j = 1; j < 3; j++)
	{
		printf("*10Áø¼ö Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À : ");
		scanf("%d", &num);

		int i;

		printf("%d(10) = ", num);

		for (i = 31; i >= 0; --i)
		{
			int result = num >> i & 1;
			printf("%d", result);
		}

		printf("(2)\n");
	}
	
	return 0;
}
