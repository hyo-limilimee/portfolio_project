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
		printf("* 현재 달걀의 수 : %d\n", count);
		if (count == 10)
		{
			break;
		}

	}
	printf("***달걀 포장이 끝났습니다.");
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
		printf("#계란의 무게를 입력하세요(단위 : g) : ");
		scanf("%d", &weight);

		if (getchar() == '\n')
		{
			if (weight < 150)
			{
				printf("*메추리알 가지고 장난하지 마시오~^^\n");
			}

			else if (weight <= 500)
			{
				break;
			}

			else
			{
				printf("*타조알 가지고 장난하지 마시오~^^\n");

			}

		}
	}
	return weight;
}