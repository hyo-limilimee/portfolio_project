#include<stdio.h>
#include <cmath>
#pragma warning (disable :4996)

int inputInt();
int primeNumber(int number);
void myflush();

int main()
{
	int number, count, line, i;
	number = inputInt();
	count = 0;
	line = 0;

	printf("1~20������ �Ҽ� ���� ������ �����ϴ�.\n");

	for (i = 2; i <= number; i++)
	{
		if (primeNumber(i) == 1)
		{
			printf("%-3d  ", i);
			count++;
			line++;
		}

		if (line == 5)
		{
			printf("\n");
			line = 0;
		}

	}
	
	printf("\n1 ~ %d������ �� �Ҽ���  %d�� �Դϴ�.", number, count);

	return 0;

}

int inputInt()
{
	int number;

	printf("* ������ �ϳ��� �Է��Ͻÿ� : ");

	while (1)
	{
		if (scanf("%d", &number) == 1)
		{
			break;
		}

		else
		{
			myflush();
			printf("* ������ �ϳ��� ���Է��Ͻÿ� : ");
		}

	}

	return number;
	
}

int primeNumber(int number)
{
	int i;

	for (i = 2; i <= (int)sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}

