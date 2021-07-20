#include<stdio.h>
#pragma warning (disable:4996)

int input();
int yearCheck(int);
void output(int, int);

int main()
{
	int year;
	int a;
	int i;
	
	for (i = 1; i < 3; i++)
	{
		year = input();
		a = yearCheck(year);

		output(year, a);
	}

	return 0;
}

int input()
{
	int in_year;

	printf("년도를 입력하시오. : ");

	scanf("%d", &in_year);

	return in_year;

}

int yearCheck(int year)
{
	int a;

	if (year % 4 != 0)
	{
		a = 0;
	}

	else if (year % 100 != 0)
	{
		a = 1;
	}

	else if (year % 400 == 0)
	{
		a = 1;
	}

	else
	{
		a = 0;
	}

	return a;
}

void output(int year, int a)
{

	if (a == 0)
	{
		printf("%d년은 평년(Common year)입니다.\n", year);

	}

	else
	{
		printf("%d년은 윤년(Leap year)입니다.\n", year);

	}

	return;
}