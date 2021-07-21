#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#pragma warning (disable:4996)

int input();
int output(int, int);
void myflush();

int main()
{
	int r_num;
	int user_num1;
	int count;

	srand((unsigned int)time(NULL));

	r_num = rand() % 100 + 1;

	user_num1 = input();

	count = output(r_num, user_num1);

	printf("우와~ 맞았당~~~ 추카추카~~ %d번째 만에 맞추셨습니다.", count);

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

	int user_num1;
	printf("#숫자를 입력하시오 : ");
	scanf("%d", &user_num1);

	while (user_num1 < 1 || user_num1 > 100 || getchar() != '\n')
	{

		myflush();

		printf("#숫자를 재입력하시오 : ");
		scanf("%d", &user_num1);

		if (user_num1 >= 1 && user_num1 <= 100)
		{
			break;
		}

	}
	return user_num1;
}




	int output(int r_num, int user_num1)
	{
		int user_num2 = 0;
		int user_num3 = 100;
		int count = 1;

		while (1)
		{

			if (r_num == user_num1)
			{
				break;
			}

			else if (r_num < user_num1)
			{

				printf("%d보다는 크고 %d보다는 작습니다.\n", user_num2, user_num1);

				user_num3 = user_num1;

				user_num1 = input();

			}

			else
			{
				printf("%d보다는 크고 %d보다는 작습니다.\n", user_num1, user_num3);

				user_num2 = user_num1;

				user_num1 = input();
			}

			count = count + 1;

		}
		return count;
	}
