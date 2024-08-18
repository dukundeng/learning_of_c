#include <stdio.h>

int main()
{
	int hour1=0, minute1=0;
	int hour2=0, minute2=0;
	int distance, a, b;

	printf("请依次输入时间点一的时值与分值(时间点一较大）：\n");
	scanf_s("%d %d",&hour1,&minute1);

	printf("请依次输入时间点二的时值与分值（时间点二较小）：\n");
	scanf_s("%d %d",&hour2,&minute2);

	distance = (hour1 * 60 + minute1) - (hour2 * 60 + minute2);
	a = distance / 60, b = distance % 60;

	printf("时间差为%d时%d分\n", a, b);

	return 0;
}