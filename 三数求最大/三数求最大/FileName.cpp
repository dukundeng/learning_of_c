#include <stdio.h>

int main()
{
	int a, b, c,max;

	printf("������Ƚϵ���������\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a >= b) {
		if (a >= c)
			max = a;
		if (a < c)
			max = c;
	}
	else {
		if (b >= c)
			max = b;
		if (c > b)
			max = c;
	}
	printf("�����е����ֵΪ%d��\n", max);

	return 0;
}