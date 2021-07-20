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
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", money);

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
		printf("# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
		scanf("%c", &a);

		if (a == 'i' || a == 'o' || a == 'q')
		{
			break;

		}


		else
		{
			printf("* �߸� �Է��ϼ̽��ϴ�.\n\n");
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

		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");

	}
	return a;
}

void deposit(int* m)
{
	int in_money;
	in_money = inputInt("# �Աݾ��� �Է��ϼ��� : ");
	*m = *m + in_money;
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", *m);
	return;
}

void withdraw(int* m)
{
	int out_money;
	out_money = inputInt("# ��ݾ��� �Է��ϼ��� : ");

	if (out_money > *m)
	{
		printf("* �ܾ��� �����մϴ�.\n");
		printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", *m);


	}

	else
	{
		*m = *m - out_money;
		printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", *m);

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