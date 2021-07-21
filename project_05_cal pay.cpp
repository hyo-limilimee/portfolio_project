#include<stdio.h>
#pragma warning (disable:4996)

int input();
int cal_gloss_pay(int hour);
int cal_taxes(int gloss_pay);
void output(int gloss_pay, int taxes, int pay);

int main()
{
	int hour, gloss_pay, taxes, pay;

	hour = input();

	gloss_pay = cal_gloss_pay(hour);

	taxes = cal_taxes(gloss_pay);

	pay = gloss_pay - taxes;

	output(gloss_pay, taxes, pay);
}

int input()
{
	int in_hour;

	printf("*1주일간의 근무시간을 입력하시오. : ");
	scanf("%d", &in_hour);

	return in_hour;
}

int cal_gloss_pay(int hour)
{
	
	int h_pay, gloss_pay;


	h_pay = 3000;

	if (hour > 40)
	{
		gloss_pay = 40 * h_pay + (hour - 40) * h_pay * 1.5;
	}

	else
	{
		gloss_pay = h_pay * hour;
	}

	return gloss_pay;

}

int cal_taxes(int gloss_pay)
{
	int taxes;

	if (gloss_pay > 100000)
	{
		taxes = 100000 * 0.15 + (gloss_pay - 100000) * 0.25;
	}

	else
	{
		taxes = gloss_pay * 0.15;
	}

	return taxes;
}

void output(int gloss_pay, int taxes, int pay)
{
	printf("# 총수입 : %d원\n# 세금 : %d원\n# 실수입 : %d원", gloss_pay, taxes, pay);

	return;
}
