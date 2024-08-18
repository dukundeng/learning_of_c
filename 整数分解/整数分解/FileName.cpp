#include <stdio.h>

int main()
{
	int a;
	int b = 0;
	int c = 0;

	printf("ÇëÊäÈëÊı×Ö£º\n");
	scanf_s("%d", &a);

	do {
		b = a % 10;
		a = a / 10;
		c = 10 * c + b;
	} while (a > 0);
	//printf("c=%d\n", c);

	int d = 0;

	do {
		d = c % 10;
		c = c / 10;
		if (c == 0) {
			printf("%d", d);
		}
		else {
			printf("%d ", d);
		}
	} while (c > 0);
	return 0;
}