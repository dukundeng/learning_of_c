#include <stdio.h>

int main()
{
	int x = 1;
	double y = 0.0;
	int i = 1;

	printf("���������֣�\n");
	scanf_s("%d", &x);

	for (i = 1; i <= x; i++) {
		if (i % 2 == 1) {
			y += 1.0 / i;
		}
		else {
			y -= 1.0 / i;
		}
	}
	printf("ǰ%d���Ϊ%f", x,y);
	return 0;
}