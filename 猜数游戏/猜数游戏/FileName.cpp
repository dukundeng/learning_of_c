#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = rand()%100;
	int b;
	int c = 1;

	printf("���Ѿ������һ��һ�����ڵ�������ʼ�°ɣ�\n");
	scanf_s("%d", &b);

	while (a != b) {
		if (a > b) {
			c++;
			printf("���С��Ŷ�����������\n");
			scanf_s("%d", &b);
		}
		else {
			c++;
			printf("��´���Ŷ�����������\n");
			scanf_s("%d", &b);
		}
	}
	printf("��ϲ��¶��ˣ���һ������%d��", c);

	return 0;
}