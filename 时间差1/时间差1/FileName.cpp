#include <stdio.h>

int main()
{
	int h1, m1;
	int h2, m2;
	int h, m;

	printf("����������ʱ���һ��ʱֵ���ֵ��\n");
	scanf_s("%d %d", &h1, &m1);
	printf("����������ʱ������ʱֵ���ֵ��\n");
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

	printf("ʱ���Ϊ%d %d\n", h, m);
	return 0;
}