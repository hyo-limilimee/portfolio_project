//classify string to letter, number, space&tab&enter, etc

#include<stdio.h>

int main()
{
	char ch;
	int a = 0; //대문자
	int b = 0; //소문자
	int c = 0; //여백 탭 엔터
	int d = 0; //기타
	int e = 0; //숫자

	printf("# 영문 문장을 입력 하시오 : \n");
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

	printf("*영문자 대소문자 개수 : %d\n*숫자문자 개수 : %d\n*여백문자(space,tab,enter)개수 : %d\n*그 외 기타문자 개수 : %d", a + b, e, c, d);
	return 0;
}
