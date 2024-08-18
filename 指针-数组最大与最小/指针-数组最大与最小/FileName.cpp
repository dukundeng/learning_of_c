#include <stdio.h>

void f(int a[], int len,int *max, int *min)
{
	for (int i = 1; i < len; i++) {
		if (*max > a[i]) {
			*max = a[i];
		}
		if (*min < a[i]) {
			*min = a[i];
		}
	}
}
int main()
{
	int a[] = { 0,1,6,5,3,6,4,8,3,7,3,78,4,6,3,565,7,3,1, };
	int max, min;
	max = min = a[0];

	f(a, sizeof(a) / sizeof(a[0]), &max, &min);
	printf("max=%d,min=%d\n", max, min);
	return 0;
}