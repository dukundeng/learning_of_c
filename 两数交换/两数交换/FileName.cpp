#include <stdio.h>

int main()
{
	int a = 5;
	int b = 6;
	int c = 0;

	c = a,a = b,b = c;

	printf("%d %d", a, b);

}