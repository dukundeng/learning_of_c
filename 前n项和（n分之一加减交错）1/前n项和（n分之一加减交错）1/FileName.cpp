#include <stdio.h>

int main()
{
	int x = 1;
	double y = 0.0;
	int i = 1;

	printf("请输入数字：\n");
	scanf_s("%d", &x);

	for (i = 1; i <= x; i++) {
		if (i % 2 == 1) {
			y += 1.0 / i;
		}
		else {
			y -= 1.0 / i;
		}
	}
	printf("前%d项和为%f", x,y);
	return 0;
}