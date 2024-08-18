#include <stdio.h>

int main()
{
	int a;
	int n = 0;
	
	printf("请输入数字：\n");
	scanf_s("%d", &a);

	if (a == 0) {
		printf("该数字为1位数\n");
	}
	else {
		while (a > 0) {
			a /= 10;
			n++;
			printf("a=%d,n=%d\n", a, n);
		}
		printf("该数字为%d位数\n", n);
	}
	return 0;
}