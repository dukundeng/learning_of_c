#include <stdio.h>

int main()
{
	int price;
	int change;

	printf("ÇëÊäÈë½ğ¶î£º");
	scanf_s("%d", &price);

	change = 100 - price;
	printf("%d", change);
	return 0;

	
}