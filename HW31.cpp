#include<stdio.h>
#pragma warning (disable:4996)

int menu();
int inputInt(const char* string);
void deposit(int* m);
void withdraw(int* m);
void myflush();

int main()
{
	char in_menu = 'a';

	int money = 0;
	printf("* 현재 잔액이 %d원 입니다.\n\n", money);

	while (1)
	{
		in_menu = menu();

		if (in_menu == 'i')
		{
			deposit(&money);
		}

		else if (in_menu == 'o')
		{
			withdraw(&money);
		}

		else if (in_menu == 'q')
		{
			break;
		}

		else
		{
			;
		}

	}

	return 0;
}

int menu()
{
	char a;

	while (1)
	{
		printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
		scanf("%c", &a);

		if (a == 'i' || a == 'o' || a == 'q')
		{
			break;

		}


		else
		{
			printf("* 잘못 입력하셨습니다.\n\n");
			myflush();
		}

	}

	return a;
}

int inputInt(const char* string)
{
	int a;
	int t;
	printf("%s", string);

	while (1)
	{
		t = scanf("%d", &a);

		if (a > 0)
		{
			myflush();
			break;
		}

		else
		{
			myflush();
		}

		printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");

	}
	return a;
}

void deposit(int* m)
{
	int in_money;
	in_money = inputInt("# 입금액을 입력하세요 : ");
	*m = *m + in_money;
	printf("* 현재 잔액은 %d원 입니다.\n\n", *m);
	return;
}

void withdraw(int* m)
{
	int out_money;
	out_money = inputInt("# 출금액을 입력하세요 : ");

	if (out_money > *m)
	{
		printf("* 잔액이 부족합니다.\n");
		printf("* 현재 잔액은 %d원 입니다.\n\n", *m);


	}

	else
	{
		*m = *m - out_money;
		printf("* 현재 잔액은 %d원 입니다.\n\n", *m);

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