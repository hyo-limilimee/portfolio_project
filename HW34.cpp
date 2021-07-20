#include<stdio.h>
#pragma warning (disable: 4996)

int input(const char*);
double calc(int, int);
void output(int, int, double, const char*);
void myflush();

int main()
{
	int code, amount;
	double fee;
	const char* str;

	code = input("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
	
	amount = input("* 사용량을 입력하시오(ton단위) : ");

	
	if (code == 1)
	{
		str = "가정용";
	}

	else if (code == 2)
	{
		str = "상업용";
	}

	else
	{
		str = "공업용";
	}

	fee = calc(code, amount);
	
	output(code, amount, fee, str);

	return 0;
	
}



int input(const char* string)
{
	int n;

	while (1)
	{
		
		printf("%s", string);
		scanf("%d", &n);

		if ( n > 0 && getchar() == '\n')
		{
			break;
		}

		else
		{
			myflush();
		}

	}

	return n;
}

double calc(int code, int amount)
{
	int fee;

	switch (code) {
	case 1: fee = amount * 50 * 1.05; break;
	case 2: fee = amount * 45 * 1.05; break;
	case 3: fee = amount * 40 * 1.05; break;

	}

	return fee;
}

void output(int code, int amount, double fee, const char* str)
{


	printf("\n# 사용자코드 : %d(%s)\n", code, str);
	printf("# 사용량 : %d ton\n", amount);
	printf("# 총수도요금 : %.0lf원\n", fee);

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