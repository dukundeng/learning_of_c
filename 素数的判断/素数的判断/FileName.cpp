#include <stdio.h>

int main()
{
	int x;
	int i = 2;
	int isprime = 1;

	printf("���������֣�\n");
	scanf_s("%d", &x);

	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isprime = 0;
			break;
		}
		else {
			isprime = 1;
		}
	}
	if (isprime == 1) {
		printf("����Ϊ������\n");
	}
	else {
		printf("��������������\n");
	}
	return 0;
}