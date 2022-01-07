#include<stdio.h>
#pragma warning (disable:4996)

int menu();
void myflush();
int inputInt(const char* string);
unsigned char openFan(unsigned char fan);
unsigned char offFan(unsigned char fan);
unsigned char reverseFan(unsigned char fan);
void displayFan(unsigned char fan);


int main()
{
	int menu_num, status;
	unsigned char fan = 0, fan_Last = 0;
	
	while (1)
	{
		menu_num = menu();

		switch (menu_num)
		{
		case 1:
			fan_Last = openFan(fan);
			break;
		case 2:
			fan_Last = offFan(fan);
			break;
		case 3:
			fan_Last = reverseFan(fan);
			break;
		case 4:
			printf("\n 프로그램을 종료합니다.\n");

			return 0;

		default:
			printf("\n 이상합니다.\n");
			return 0;
		}


		fan = fan_Last;

	}

	return 0;
}



int menu()
{
	int menu_num;

	while (1)
	{
		printf("1. 환풍구 열기 / 2. 환풍구 닫기 / 3.환풍구 전체 전환 / 4. 종료 : ");
		scanf("%d", &menu_num);

		if (menu_num > 0 && menu_num < 5)
		{
			break;
		}

		else
		{
			myflush();
		}

	}

	return menu_num;
}


int inputInt(const char* string)
{
	int a;
	int t;
	printf("%s", string);

	while (1)
	{
		t = scanf("%d", &a);

		if (a > 0 && a < 9)
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


unsigned char openFan(unsigned char fan)
{
	const char* a = "Fan 열기 실행 화면";
	int Fan_num;
	int FAN_01, FAN_02, FAN_03, FAN_04, FAN_05, FAN_06, FAN_07, FAN_08;
	unsigned char k = 1;

	
	printf("-----------------------------------------------------------\n");
	printf("%35s\n", a);
	printf("-----------------------------------------------------------\n");

	Fan_num = inputInt("* OPEN할 FAN 번호를 입력하시오(1-8) : ");

	fan = fan | k << (Fan_num - 1);


	displayFan(fan);

	return fan;

}


unsigned char offFan(unsigned char fan)
{
	const char* a = "Fan 닫기 실행 화면";
	int Fan_num, xxx;
	int FAN_01, FAN_02, FAN_03, FAN_04, FAN_05, FAN_06, FAN_07, FAN_08;
	unsigned char k = 0;




	printf("-----------------------------------------------------------\n");
	printf("%35s\n", a);
	printf("-----------------------------------------------------------\n");

	Fan_num = inputInt("* CLOSE할 FAN 번호를 입력하시오(1-8) : ");

		switch (Fan_num)
		{
		case 1:
			xxx = 0xFE;
			break;
		case 2:
			xxx = 0xFD;
			break;
		case 3:
			xxx = 0xFB;
			break;
		case 4:
			xxx = 0xF7;
			break;
		case 5:
			xxx = 0xEF;
			break;
		case 6:
			xxx = 0xDF;
			break;
		case 7:
			xxx = 0xBF;
			break;
		case 8:
			xxx = 0x7F;
			break;
		default:
			xxx = 0xFF;
			break;
		}

	fan = fan & xxx;
		
	fan = fan & xxx;
	
	displayFan(fan);

	return fan;

}


unsigned char reverseFan(unsigned char fan)
{
	const char* a = "Fan 전체 전환 실행 화면";
	int Fan_num, i;
	int FAN_01, FAN_02, FAN_03, FAN_04, FAN_05, FAN_06, FAN_07, FAN_08;
	unsigned char k = 1;

	printf("-----------------------------------------------------------\n");
	printf("%35s\n", a);
	printf("-----------------------------------------------------------\n");

	printf("* 전체 FAN의 상태가 전환되었습니다.(ON, OFF 상태 뒤바뀜)\n");


	for (i = 0; i < 9; i++)
	{
			fan = fan ^ (k << (i - 1));
	}

	displayFan(fan);

	return fan;



}

void displayFan(unsigned char fan)
{
	unsigned char k = 1;
	printf("-----------------------------------------------------------\n");
	printf("8번FAN 7번FAN 6번FAN 5번FAN 4번FAN 3번FAN 2번FAN 1번FAN\n");

	for (int i = 0; i < 8; i++)
	{
		if ((fan & k << (7 - i)) == 0)
			printf("  OFF  ");
		else
			printf("  ON   ");
	}
	printf("\n-----------------------------------------------------------\n");

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
