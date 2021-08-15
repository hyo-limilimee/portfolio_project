#include<stdio.h>
#pragma warning (disable:4996)

unsigned int inputUInt(const char* string);
double inputDouble(const char* string);
unsigned int ipow(int num, int N);
double fpow(double fnum, int N);
void myflush();

int main()
{
	int num, N, uiresult;

	double fnum, dresult, N_d;

	num = inputUInt("* 양의 정수 밑을 입력하시오 : ");
	N = inputUInt("* 양의 승을 입력하시오 : ");
	uiresult = ipow(num, N);
	printf("%d의 %d승은 %d입니다.\n\n", num, N, uiresult);

	fnum = inputDouble("* 양의 실수 밑을 입력하시오 : ");
	N = inputDouble("* 양의 승을 입력하시오 : ");
	dresult = fpow(fnum, N);
	
	printf("%.2lf의 %d승은 %.3lf입니다.\n\n", fnum, N, dresult);
	
	return 0;
}

unsigned int inputUInt(const char* string)
{
	int num;

	while (1)
	{
		printf("%s", string);
		scanf("%d", &num);

		if (num > 0 && getchar() == '\n')
		{
			break;
		}

		else
		{
			myflush();
		}

	}

	return num;
	
}

double inputDouble(const char* string)
{
	double fnum;

	while (1)
	{
		printf("%s", string);
		scanf("%lf", &fnum);

		if (fnum > 0 && getchar() == '\n')
		{
			break;
		}

		else
		{
			myflush();
		}

	}

	return fnum;

}

unsigned int ipow(int num, int N)
{
	int result = 1, i;
	for (i = 0; i < N; i++)
	{
		result *= num;
	}

	return result;
}

double fpow(double fnum, int N)
{
	double result = 1, i;
	for (i = 0; i < N; i++)
	{
		result *= fnum;
	}

	return result;
}

void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}
