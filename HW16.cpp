#include<stdio.h>
#pragma warning (disable:4996)

int input(void);
int calc(void);
void output(int);


int main()
{
	int i;
	for (i = 1; i < 6; i++)
	{

		int fee;

		fee = calc();

		output(fee);

	}

	return 0;
}

int input()
{
	int cal_num;

	printf("역수를 입력하시오 : ");
	scanf("%d", &cal_num);

	return cal_num;
}

int calc()
{
	int num;

	num = input();

	int add_num, cal_fee, add_fee;

	if (num > 10)
	{
		add_num = num - 10;
		cal_fee = 800;

		if (add_num % 2 == 1)
		{
			add_fee = (add_num + 1) / 2 * 100;
		}

		else if (add_num % 2 == 0)
		{
			add_fee = add_num / 2 * 100;
		}

		cal_fee = cal_fee + add_fee;
	}

	else if (num > 5)
	{
		cal_fee = 800;
	}

	else if (num > 0)
	{
		cal_fee = 600;
	}
	else
	{
		cal_fee = 0;
	}

	return cal_fee;

}

void output(int fee)
{
	printf("요금 : %d원\n", fee);

	return;
}


