#include <stdio.h>

int main()
{
	int a,b,c;

	printf("����������Ʊ�����\n");
	scanf_s("%d %d", &a, &b);

	if (a >= b) {
		c = a - b;
		printf("����%dԪ��\n",c);
	}
	else {
		printf("��Ǹ������Ǯ������\n");
	}

	return 0;
}