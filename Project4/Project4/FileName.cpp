#include <stdio.h>

int main()
{
	int bag, price,change;

	printf("�������Ǯ��Ԫ����,�����ܽ�Ԫ����");
	scanf_s("%d,%d", &price,&bag);

	change = bag - price;
	printf("%d", change);

	return 0;
}