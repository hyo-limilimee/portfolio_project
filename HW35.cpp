#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int count, number, sum;
    sum = 0;

	for (count = 1; count <= 5;)
	{
		printf("0보다 큰수를 입력하시오(%d 번째) : ", count);
		scanf("%d", &number);

		if (number > 0 && getchar() == '\n')
		{
			count++;
			sum += number;
		}

		else
		{
			while (getchar() != '\n')
			{
				;
			}
			
		}

	}
	
	printf("입력된 값의 총 합 : %d", sum);

	return 0;

	
}


