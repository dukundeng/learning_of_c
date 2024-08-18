#include <stdio.h>

int main()
{
	int a,b,c,d;

	printf("您今年多少岁？\n");
	scanf_s("%d", &a);
	printf("好的，鸡蛋3元一个，您现在有多少元？\n");
	scanf_s("%d", &b);
	
	c = b / 3, d = b % 3;

    printf("好的，您一共能购买%d个鸡蛋，找零%d元。\n",c,d);

	return 0;
	
}