#include <stdio.h>

int main()
{
	int a;
	int n = 0;
	
	printf("���������֣�\n");
	scanf_s("%d", &a);

	if (a == 0) {
		printf("������Ϊ1λ��\n");
	}
	else {
		while (a > 0) {
			a /= 10;
			n++;
			printf("a=%d,n=%d\n", a, n);
		}
		printf("������Ϊ%dλ��\n", n);
	}
	return 0;
}