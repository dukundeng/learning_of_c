#include <stdio.h>

int main()
{
	double number;
	double sum = 0;
	double count = 0;
	double average;

	printf("���������֣�����-1��������\n");
	scanf_s("%lf", &number);

	if (number == -1) {
		printf("�ü����ѽ�����\n");
	}
	else {
		while (number != -1) {
			sum = sum + number;
			count++;
			//printf("sum=%.2f,count=%.2f\n", sum, count);
			printf("���������֣�����-1��������\n");
			scanf_s("%lf", &number);
		}
		printf("average = %.2f\n", average = sum / count);
	}
	return 0;
}