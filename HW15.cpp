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
//�����Դ� ������ �Է� �ް� Ű�� �Ǽ��� �Է¹���
int inputWeight()
{
	int in_weight;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%d", &in_weight);

	return in_weight;
}

double inputHeight()
{
	double in_height;

	printf("Ű�� �Է��ϼ���(m) : ");
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
	
	printf("*BMI ��ġ�� ���� �Ұ�ǥ\n");
	
	if (BMI < 18.5)
	{
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", BMI);
	}

	else if (BMI < 25.0)
	{
		printf("����� BMI�� %.1lf���� ����ü���Դϴ�.", BMI);
	}

	else if (BMI < 30.0)

	{
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", BMI);
	}

	else if (BMI < 40.0)
	{
		printf("����� BMI�� %.1lf���� ���Դϴ�.", BMI);
	}

	else
	{
		printf("����� BMI�� %.1lf���� �����Դϴ�.", BMI);
	}

	return;
}


