#include <stdio.h>

int main()
{
	double number;
	double sum = 0;
	double count = 0;
	double average;

	printf("请输入数字（输入-1结束）：\n");
	scanf_s("%lf", &number);

	if (number == -1) {
		printf("该计算已结束。\n");
	}
	else {
		while (number != -1) {
			sum = sum + number;
			count++;
			//printf("sum=%.2f,count=%.2f\n", sum, count);
			printf("请输入数字（输入-1结束）：\n");
			scanf_s("%lf", &number);
		}
		printf("average = %.2f\n", average = sum / count);
	}
	return 0;
}