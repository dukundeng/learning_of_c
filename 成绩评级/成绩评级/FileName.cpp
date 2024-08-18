#include <stdio.h>

int main()
{
	int a, b;

	printf("ÇëÊäÈëÄúµÄ³É¼¨£º\n");
	scanf_s("%d", &a);

	b = a / 10;

	switch (b) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("E\n");
		break;
	}
	return 0;
}