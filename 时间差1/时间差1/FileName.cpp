#include <stdio.h>

int main()
{
	int h1, m1;
	int h2, m2;
	int h, m;

	printf("请依次输入时间点一的时值与分值：\n");
	scanf_s("%d %d", &h1, &m1);
	printf("请依次输入时间点二的时值与分值：\n");
	scanf_s("%d %d", &h2, &m2);

	if (h1 < h2) {
		if (m2 < m1) {
			h = h2 - h1-1, m = m2 - m1 + 60;
		}
		else {
			h = h2 - h1, m = m2 - m1;
		}
	}
	else {
		if (m1 < m2) {
			h = h1 - h2 - 1, m = m1 - m2 + 60;
		}
		else {
			h = h1 - h2, m = m1 - m2;
		}
	}

	printf("时间差为%d %d\n", h, m);
	return 0;
}