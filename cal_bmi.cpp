#include<stdio.h>
#pragma warning (disable:4996)

int inputWeight(void);
double inputHeight(void);
double calcBMI(void);
void output(double);

int main()
{	
	double BMI;

	BMI = calcBMI();

	output(BMI);

	return 0;


}
//몸무게는 정수로 입력 받고 키는 실수로 입력받음
int inputWeight()
{
	int in_weight;
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%d", &in_weight);

	return in_weight;
}

double inputHeight()
{
	double in_height;

	printf("키를 입력하세요(m) : ");
	
	scanf("%lf", &in_height);

	return in_height;
}

double calcBMI()
{
	int weight;
	double height;
	double cal_BMI;

	weight = inputWeight();
	height = inputHeight();

	cal_BMI  = weight / height / height;
	
	return cal_BMI;
}

void output(double BMI)
{
	
	printf("*BMI 수치에 따른 소견표\n");
	
	if (BMI < 18.5)
	{
		printf("당신의 BMI는 %.1lf으로 저체중입니다.", BMI);
	}

	else if (BMI < 25.0)
	{
		printf("당신의 BMI는 %.1lf으로 정상체중입니다.", BMI);
	}

	else if (BMI < 30.0)

	{
		printf("당신의 BMI는 %.1lf으로 과체중입니다.", BMI);
	}

	else if (BMI < 40.0)
	{
		printf("당신의 BMI는 %.1lf으로 비만입니다.", BMI);
	}

	else
	{
		printf("당신의 BMI는 %.1lf으로 고도비만입니다.", BMI);
	}

	return;
}


