#include<stdio.h>

int main()
{
	char ch;
	int a = 0; //�빮��
	int b = 0; //�ҹ���
	int c = 0; //���� �� ����
	int d = 0; //��Ÿ
	int e = 0; //����

	printf("# ���� ������ �Է� �Ͻÿ� : \n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			a++;
		}

		else if (ch >= 'a' && ch <= 'z')
		{
			b++;
		}

		else if (ch == ' ' || ch == '\n' || ch == '\t')
		{
			c++;
		}


		else if (ch >= '0' && ch <= '9')
		{
			e++;
		}

		else
		{
			d++;
		}

	}

	printf("*������ ��ҹ��� ���� : %d\n*���ڹ��� ���� : %d\n*���鹮��(space,tab,enter)���� : %d\n*�� �� ��Ÿ���� ���� : %d", a + b, e, c, d);
	return 0;
}