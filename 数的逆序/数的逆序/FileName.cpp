#include <stdio.h>

int main()
{
	int x;
	int pcs = 0;
	int ret = 0;

	printf("���������֡�\n");
	scanf_s("%d", &x);

	while (x > 0) {
		pcs = x % 10;
		printf("%d", pcs);
		x /= 10;
		ret = ret * 10 + pcs;
	}
	//printf("%d", ret);(����printf��ѡһ���ֱ���Ա�ʾ007��7��)
	return 0;
}