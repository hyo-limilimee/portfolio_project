#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int count, number, sum;
    sum = 0;

	for (count = 1; count <= 5;)
	{
		printf("0���� ū���� �Է��Ͻÿ�(%d ��°) : ", count);
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
	
	printf("�Էµ� ���� �� �� : %d", sum);

	return 0;

	
}


