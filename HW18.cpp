#include<stdio.h>
#pragma warning(disable:4996)

int inputAge(void);
int inputCount(void);
void output(int, int, int);

int main()
{
	int age, count, amount, s_price, pay;

	age = inputAge();
	count = inputCount();

	if (age > 56)
	{
		amount = 500 * count;
	}

	else if (age > 20)
	{
		amount = 1500 * count;
	}

	else if (age > 14)
	{
		amount = 1000 * count;
	}

	else if (age > 8)
	{
		amount = 700 * count;
	}
	
	else
	{
		amount = 500 * count;
	}

	if (count > 4)
	{
		s_price = amount / 10;
	}

	else
	{
		s_price = 0;
	}

	pay = amount - s_price;

	output(amount, s_price, pay);

	return 0;
}

int inputAge()
{
	int in_age;

	printf("���尴�� ���̸� �Է��Ͻÿ�. : ");
	scanf("%d", &in_age);

	return in_age;

}

int inputCount()
{
	int in_count;

	printf("���尴�� ���� �Է��Ͻÿ�. : ");
	scanf("%d", &in_count);

	return in_count;

}

void output(int amount, int s_price, int pay)
{
	printf("����� => %d��\n���αݾ� => %d��\n�����ݾ� => %d��", amount, s_price, pay);

	return;
}