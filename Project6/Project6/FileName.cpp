#include <stdio.h>

int main()
{
	int hour1=0, minute1=0;
	int hour2=0, minute2=0;
	int distance, a, b;

	printf("����������ʱ���һ��ʱֵ���ֵ(ʱ���һ�ϴ󣩣�\n");
	scanf_s("%d %d",&hour1,&minute1);

	printf("����������ʱ������ʱֵ���ֵ��ʱ������С����\n");
	scanf_s("%d %d",&hour2,&minute2);

	distance = (hour1 * 60 + minute1) - (hour2 * 60 + minute2);
	a = distance / 60, b = distance % 60;

	printf("ʱ���Ϊ%dʱ%d��\n", a, b);

	return 0;
}