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
			printf("\n ���α׷��� �����մϴ�.\n");

			return 0;

		default:
			printf("\n �̻��մϴ�.\n");
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
		printf("1. ȯǳ�� ���� / 2. ȯǳ�� �ݱ� / 3.ȯǳ�� ��ü ��ȯ / 4. ���� : ");
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

		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");

	}
	return a;
}


unsigned char openFan(unsigned char fan)
{
	const char* a = "Fan ���� ���� ȭ��";
	int Fan_num;
	int FAN_01, FAN_02, FAN_03, FAN_04, FAN_05, FAN_06, FAN_07, FAN_08;
	unsigned char k = 1;

	
	printf("-----------------------------------------------------------\n");
	printf("%35s\n", a);
	printf("-----------------------------------------------------------\n");

	Fan_num = inputInt("* OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");

	fan = fan | k << (Fan_num - 1);


	displayFan(fan);

	return fan;

}


unsigned char offFan(unsigned char fan)
{
	const char* a = "Fan �ݱ� ���� ȭ��";
	int Fan_num, xxx;
	int FAN_01, FAN_02, FAN_03, FAN_04, FAN_05, FAN_06, FAN_07, FAN_08;
	unsigned char k = 0;




	printf("-----------------------------------------------------------\n");
	printf("%35s\n", a);
	printf("-----------------------------------------------------------\n");

	Fan_num = inputInt("* CLOSE�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");

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
	const char* a = "Fan ��ü ��ȯ ���� ȭ��";
	int Fan_num, i;
	int FAN_01, FAN_02, FAN_03, FAN_04, FAN_05, FAN_06, FAN_07, FAN_08;
	unsigned char k = 1;

	printf("-----------------------------------------------------------\n");
	printf("%35s\n", a);
	printf("-----------------------------------------------------------\n");

	printf("* ��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�.(ON, OFF ���� �ڹٲ�)\n");


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
	printf("8��FAN 7��FAN 6��FAN 5��FAN 4��FAN 3��FAN 2��FAN 1��FAN\n");

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
