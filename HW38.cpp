#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int day, gold, i, j, count, xx;

	gold = 0;
	count = 0;

	printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
	scanf("%d", &day);

	for (i = 1; i <= day; i++)
	{
	
		for (j = 1; j < i+1; j++)
		{
			xx = i;
//			printf(" %d ", xx );
			count++;

			if (count < day+1)
			{
				gold = gold + xx;
			}


		}
	}
		
	printf("�ٹ��� : %d�� / �� ��ȭ �� %d ��", day, gold);
}




