#include<stdio.h>
#pragma warning (disable:4996)

void myflush();
void input(int*, int*, int*);
int transNumber(int);

int main()
{
    int start, end, gojip;

    input(&start, &end, &gojip);

    printf("�������� %d�� ���� ���\n", gojip);

    int i, number, count;
    int gojip_sum = 0;

    for (i = start; i <= end; i++)
    {
        number = i;
        count = 0;

        while (number > 10)
        {
            number = transNumber(number);
            count++;
        }

        if (count == gojip)
        {
            printf("%d\n", i);
            gojip_sum++;
        }

        else
        {
            ;
        }

    }

    printf("�� ���� : %d��\n", gojip_sum);


    return 0;
}



void input(int* s_number, int* e_number, int* g_number)
{
    while (1)
    {
        printf("���� ��(P1) : ");
        scanf("%d", s_number);

        if (*s_number <= 100 && getchar() == '\n')
        {
            break;
        }

        else
        {
            ;
        }

        myflush();
    }

    while (1)
    {
        printf("�� ��(P2) : ");
        scanf("%d", e_number);

        if (*e_number <= 10000 && getchar() == '\n')
        {
            break;
        }

        else
        {
            ;
        }

        myflush();
    }

    while (1)
    {
        printf("������(N) : ");
        scanf("%d", g_number);

        if (*g_number <= 10 && *g_number >= 1 && getchar() == '\n')
        {
            break;
        }

        else
        {
            ;
        }

        myflush();
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

int transNumber(int number)
{
    int ret = 1;
    while (number > 0)
    {
        ret *= number % 10;
        number /= 10;
    }
    return ret;
}