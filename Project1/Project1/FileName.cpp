#include <stdio.h>

int main()
{
	int price;
	int change;

	printf("�������");
	scanf_s("%d", &price);

	change = 100 - price;
	printf("%d", change);
	return 0;

	
}