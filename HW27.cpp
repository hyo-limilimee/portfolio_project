#include<stdio.h>
#pragma warning (disable:4996)

void myflush(void);
int input(void);

int main()
{
	int weight;
	int count = 0;
	while (1)
	{
		count++;

		weight = input();
		printf("* ���� �ް��� �� : %d\n", count);
		if (count == 10)
		{
			break;
		}

	}
	printf("***�ް� ������ �������ϴ�.");
	return 0;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}

int input()
{
	int weight;
	while (1)
	{
		printf("#����� ���Ը� �Է��ϼ���(���� : g) : ");
		scanf("%d", &weight);

		if (getchar() == '\n')
		{
			if (weight < 150)
			{
				printf("*���߸��� ������ �峭���� ���ÿ�~^^\n");
			}

			else if (weight <= 500)
			{
				break;
			}

			else
			{
				printf("*Ÿ���� ������ �峭���� ���ÿ�~^^\n");

			}

		}
	}
	return weight;
}