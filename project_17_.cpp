#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int i;

	const char* a = "*";
	const char* b = "#";

	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 0 + 1)
		{
			printf("\n");
		}

		else
		{
			;
		}

		if (i % 15 == 0)
		{
			printf("%3d", i);
		}

		else if (i % 3 == 0)
		{
			printf("%3s", a);
		}

		else if (i % 5 == 0)
		{
			printf("%3s", b);
		}

		else
		{
			printf("%3d", i);
		}

	}

	return 0;
}
