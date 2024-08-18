#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = rand()%100;
	int b;
	int c = 1;

	printf("我已经想好了一个一百以内的数，开始猜吧！\n");
	scanf_s("%d", &b);

	while (a != b) {
		if (a > b) {
			c++;
			printf("你猜小了哦，请继续输入\n");
			scanf_s("%d", &b);
		}
		else {
			c++;
			printf("你猜大了哦，请继续输入\n");
			scanf_s("%d", &b);
		}
	}
	printf("恭喜你猜对了，你一共猜了%d次", c);

	return 0;
}