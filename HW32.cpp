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

	num = inputUInt("* ���� ���� ���� �Է��Ͻÿ� : ");
	N = inputUInt("* ���� ���� �Է��Ͻÿ� : ");
	uiresult = ipow(num, N);
	printf("%d�� %d���� %d�Դϴ�.\n\n", num, N, uiresult);

	fnum = inputDouble("* ���� �Ǽ� ���� �Է��Ͻÿ� : ");
	N = inputDouble("* ���� ���� �Է��Ͻÿ� : ");
	dresult = fpow(fnum, N);
	
	printf("%.2lf�� %d���� %.3lf�Դϴ�.\n\n", fnum, N, dresult);
	
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