#include <stdio.h>

int main()
{
	const int number = 10;
	int x;
	int a[number] = { 0 };

	printf("���������֣�����-1��ֹ����\n");
	do {
		scanf_s("%d", &x);
		if (x >= 0 && x < number) {
			a[x] ++;
		}
	} while (x != -1);
	
	for (int i = 0; i < number; i++) {
		if (a[i] != 0) {
			printf("%d������%d��\n", i, a[i]);
		}
	}
	return 0;
}