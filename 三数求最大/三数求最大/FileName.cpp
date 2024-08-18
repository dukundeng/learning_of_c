#include <stdio.h>

int main()
{
	int a, b, c,max;

	printf("请输入比较的三个数。\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a >= b) {
		if (a >= c)
			max = a;
		if (a < c)
			max = c;
	}
	else {
		if (b >= c)
			max = b;
		if (c > b)
			max = c;
	}
	printf("三数中的最大值为%d。\n", max);

	return 0;
}