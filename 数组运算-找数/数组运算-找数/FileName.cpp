#include <stdio.h>
int search(int key, int a[],int length )
{
	int ret = -1;
	for (int i = 0; i < length; i++) {
		if (a[i] == key) {
			ret = i;
			break;
		}
	}
	return ret;
}

int main()
{
	int a[] = {2,3,5,6,7,};
	int key;

	printf("��������ҪѰ�ҵ����֣�\n");
	scanf_s("%d", &key);

	int ret = search(key, a, sizeof(a) / sizeof(a[0]));
	if (ret != -1) {
		printf("%d�ڵ�%d��λ����\n", key, ret);
	}
	else {
		printf("%d������\n", key);
	}
	return 0;
}