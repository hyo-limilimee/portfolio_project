#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int i, num, sum, term;
    int n1 = 0;
    int n2 = 1;
    sum = 0;

	printf("피보나치 수열의 항수를 입력하시오 : ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i)
    {
        term = n1 + n2;
        n1 = n2;
        n2 = term;
        
        if (i == num)
        {
            printf("%d = ", n1);
            sum = sum + n1;
        }

        else
        {
            printf("%d + ", n1);
            sum = sum + n1;
        }
        
    }

    printf("%d", sum);
    return 0;
	
}

