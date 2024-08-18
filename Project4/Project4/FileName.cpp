#include <stdio.h>

int main()
{
	int bag, price,change;

	printf("请输入价钱（元）：,输入总金额（元）：");
	scanf_s("%d,%d", &price,&bag);

	change = bag - price;
	printf("%d", change);

	return 0;
}