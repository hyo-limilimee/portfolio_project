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

	code = input("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ");
	
	amount = input("* ��뷮�� �Է��Ͻÿ�(ton����) : ");

	
	if (code == 1)
	{
		str = "������";
	}

	else if (code == 2)
	{
		str = "�����";
	}

	else
	{
		str = "������";
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


	printf("\n# ������ڵ� : %d(%s)\n", code, str);
	printf("# ��뷮 : %d ton\n", amount);
	printf("# �Ѽ������ : %.0lf��\n", fee);

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