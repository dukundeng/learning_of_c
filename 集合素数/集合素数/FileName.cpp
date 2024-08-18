#include <stdio.h>

int main()
{
	int x = 2;
	int i = 2;
	int prime = 1;
	int y;

	printf("请确定你要判断素数的范围2-(  )\n");
	scanf_s("%d", &y);

	for (x = 2; x < y; x++) {
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				prime = 0;
				break;
			}
			else {
				prime = 1;
			}
		}
		if (prime == 1) {
			printf("%d ", x);
		}
	}
	return 0;
}