#include <stdio.h>

int main()
{
	int x;
	int pcs = 0;
	int ret = 0;

	printf("请输入数字。\n");
	scanf_s("%d", &x);

	while (x > 0) {
		pcs = x % 10;
		printf("%d", pcs);
		x /= 10;
		ret = ret * 10 + pcs;
	}
	//printf("%d", ret);(两个printf二选一，分别可以表示007和7。)
	return 0;
}