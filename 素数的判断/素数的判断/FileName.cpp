#include <stdio.h>

int main()
{
	int x;
	int i = 2;
	int isprime = 1;

	printf("请输入数字：\n");
	scanf_s("%d", &x);

	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isprime = 0;
			break;
		}
		else {
			isprime = 1;
		}
	}
	if (isprime == 1) {
		printf("该数为素数。\n");
	}
	else {
		printf("该数不是素数。\n");
	}
	return 0;
}