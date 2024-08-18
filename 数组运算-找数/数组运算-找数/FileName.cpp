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

	printf("请输入你要寻找的数字：\n");
	scanf_s("%d", &key);

	int ret = search(key, a, sizeof(a) / sizeof(a[0]));
	if (ret != -1) {
		printf("%d在第%d个位置上\n", key, ret);
	}
	else {
		printf("%d不存在\n", key);
	}
	return 0;
}