#include <stdio.h>

int main()
{
	int a, b;

	scanf_s("%d %d", &a, &b);

	double c = (a + b) / 2.0;

	printf("%.2f", c);

	return 0l;
}