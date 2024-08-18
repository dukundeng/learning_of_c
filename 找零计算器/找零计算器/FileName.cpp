#include <stdio.h>

int main()
{
	int a,b,c;

	printf("请依次输入票面与金额：\n");
	scanf_s("%d %d", &a, &b);

	if (a >= b) {
		c = a - b;
		printf("找您%d元。\n",c);
	}
	else {
		printf("抱歉，您的钱不够。\n");
	}

	return 0;
}