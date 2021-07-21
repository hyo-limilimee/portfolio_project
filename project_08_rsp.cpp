#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#pragma warning (disable:4996)

int input();
void output(int r_num, int u_num, int *tie, int *win);
void myflush();

int main()
{
	int u_num, r_num;
	int tie = 0;
	int win = 0;

	srand((unsigned int)time(NULL));
	r_num = rand() % 3 + 1;

	u_num = input();

	output(r_num, u_num, &tie, &win);
	
	printf(" 게임결과: %d승 %d무", win, tie);

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
	int u_num;

	printf("#바위는 1, 가위는 2, 보는 3중에서 선택하세요 : ");
	scanf("%d", &u_num);
	
	while (u_num < 1 || u_num > 3 || getchar() != '\n')
	{

		myflush();

		printf("바위는 1, 가위는 2, 보는 3중에서 재선택하세요 : ");
		scanf("%d", &u_num);

		if (u_num >= 1 && u_num <= 3)
		{
			break;
		}

	}
	return u_num;
}

void output(int r_num, int u_num, int *tie, int *win)
{
	while (1)
		if (u_num == r_num)
		{
			*tie += 1;
			if (r_num == 1 && u_num == 1)
			{
				printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다.\n");

				u_num = input();
				r_num = rand() % 3 + 1;

			}

			else if (r_num == 2 && u_num == 2)
			{
				printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n");

				u_num = input();
				r_num = rand() % 3 + 1;


			}

			else
			{
				printf("당신은 보선택, 컴퓨터는 보 선택 : 비겼습니다.\n");

				u_num = input();
				r_num = rand() % 3 + 1;

			}
		}

		else
		{
			if (r_num == 1 && u_num == 2)
			{
				printf("당신은 가위 선택, 컴퓨터는 바위 선택 : 당신이 졌습니다.\n");
				break;
			}

			else if (r_num == 2 && u_num == 3)
			{
				printf("당신은 보 선택, 컴퓨터는 가위 선택 : 당신이 졌습니다.\n");
				break;
			}

			else if (r_num == 3 && u_num == 1)
			{
				printf("당신은 바위 선택, 컴퓨터는 보 선택 : 당신이 졌습니다.\n");
				break;
			}

			else if (r_num == 1 && u_num == 3)
			{
				*win += 1;
				printf("당신은 보 선택, 컴퓨터는 바위 선택 : 이겼습니다.\n");
				u_num = input();
				r_num = rand() % 3 + 1;

			}

			else if (r_num == 2 && u_num == 1)
			{
				*win += 1;
				printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다.\n");
				u_num = input();
				r_num = rand() % 3 + 1;
			}

			else
			{
				*win += 1;
				printf("당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다.\n");
				u_num = input();
				r_num = rand() % 3 + 1;
			}

		}
		
	return;

}
