#include<stdio.h>
#pragma warning (disable: 4996)
void input(int*, int*, int*);
int yearcheck(int);
int daycheck(int, int, int, int);
int totalday(int, int, int);
void output(int, int, int, int);

void myflush();

int main()
{
	int year, month, day, total, yeartype;

	while (1)
	{
		input(&year, &month, &day);

		if (getchar() != '\n')
		{
			break;
		}

		else
		{
			yeartype = yearcheck(year);
			daycheck(year, month, day, yeartype);

			while (1)
			{
				if (daycheck(year, month, day, yeartype) == 1)
				{
					break;
				}

				else
				{
					myflush();
					input(&year, &month, &day);
					yeartype = yearcheck(year);
					daycheck(year, month, day, yeartype);
				}
			}
		}

		total = totalday(year, month, day);
		output(year, month, day, total);

	}

	return 0;

}

void input(int* year, int* month, int* day)
{
	printf("* 년 월 일을 입력하시오 : ");
	scanf("%d %d %d", year, month, day);

	return;
}

int yearcheck(int year)
{
	if (year % 4 != 0)
	{
		return 0;
	}

	else if (year % 100 != 0)
	{
		return 1;
	}

	else if (year % 400 == 0)
	{
		return 1;
	}

	else
	{
		return 0;
	}

	//윤년이면 1, 평년이면 0
}

int daycheck(int year, int month, int day, int yeartype)
{
	int errorcheck;
	int feb = 0;
	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (year < 1900)
	{
		errorcheck = 0;
		return errorcheck;
	}

	else
	{
		errorcheck = 1;
	}

	if (month < 1 || month > 12)
	{
		errorcheck = 0;
	}

	else
	{
		errorcheck = 1;
	}

	if (yeartype == 1 && month == 2)
	{
		feb = months[month - 1] + 1;
	}

	else
	{
		feb = months[month - 1];
	}

	if (day < 1 || day > feb)
	{
		errorcheck = 0;
	}

	else
	{
		errorcheck = 1;

	}

	return errorcheck;
}

int totalday(int year, int month, int day)
{
	int i;

	int yearsum = 0, monthsum = 0, total = 0;
	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (i = 1900; i < year; i++)
	{
		if (yearcheck(i) == 1)
		{
			yearsum += 366;
		}

		else
		{
			yearsum += 365;
		}
	}

	for (i = 1; i < month; i++)
	{
		monthsum += months[i - 1];
	}

	total = yearsum + monthsum + day;

	if (yearcheck(year) == 1 && month >= 3)
	{
		total++;
	}

	return total;
}

void output(int year, int month, int day, int totalday)
{
	printf("%d년 %d월 %d일은 ", year, month, day);
	switch (totalday % 7)
	{
	case 0: printf("일요일입니다.\n\n"); break;
	case 1: printf("월요일입니다.\n\n"); break;
	case 2: printf("화요일입니다.\n\n"); break;
	case 3: printf("수요일입니다.\n\n"); break;
	case 4: printf("목요일입니다.\n\n"); break;
	case 5: printf("금요일입니다.\n\n"); break;
	case 6: printf("토요일입니다.\n\n"); break;
	}

	return;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}