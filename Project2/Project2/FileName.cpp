#include <stdio.h>

int main()
{
	int a,b,c,d;

	printf("����������ꣿ\n");
	scanf_s("%d", &a);
	printf("�õģ�����3Ԫһ�����������ж���Ԫ��\n");
	scanf_s("%d", &b);
	
	c = b / 3, d = b % 3;

    printf("�õģ���һ���ܹ���%d������������%dԪ��\n",c,d);

	return 0;
	
}