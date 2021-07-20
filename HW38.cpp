#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int day, gold, i, j, count, xx;

	gold = 0;
	count = 0;

	printf("* 기사의 근무일수를 입력하시오 : ");
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
		
	printf("근무일 : %d일 / 총 금화 수 %d 개", day, gold);
}




