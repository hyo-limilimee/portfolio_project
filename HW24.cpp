#include<stdio.h>
#pragma warning (disable:4996)
#define UPMOVE 50
#define DOWNMOVE 20

int input();
int calc(int);
void output(double, int);

int main()
{
	int i;

	for (i = 1; i < 3; i++)
	{
		int height_cm, count;

		height_cm = input();
		count = calc(height_cm);

		double height;
		height = 0.01 * height_cm;
		output(height, count);
	}

	return 0;

}

int input()
{
	int result, num, in_height;
	while (1)
	{
		printf("*우물의 깊이를 입력하시오(cm단위) : ");
		result = scanf("%d", &in_height);

		while (getchar() != '\n')
		{
			;
		}

		if (result == 1)
		{
			return in_height;
		}
	}
}

int calc(int height_cm)
{
	int snail = 0;
	int count = 0;

	while (snail < height_cm)
	{

		count = count + 1;

		snail += UPMOVE;

		if (snail >= height_cm)
		{
			break;
		}

		snail -= DOWNMOVE;
	}
	return count;

}

void output(double height, int count)
{
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", height, count);

	return;
}