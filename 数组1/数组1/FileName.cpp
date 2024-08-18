#include <stdio.h>

int main()
{
	int number[100];
	int sum = 0;
	int count = 0;
	double average = 0.0;
	int x ;
	int i = 1;

	printf("ÇëÊäÈëÊı×Ö£º\n");
	scanf_s("%d", &x);
	while(x != -1){
		sum += x;
		count++;
		number[count] = x;
		scanf_s("%d", &x);
	}
	average = sum * 1.0 / count;
	for (i = 1; i <= count; i++) {
		if (number[i] > average) {
			printf("%d ", number[i]);
		}
	}
	printf("average = %f\n", average);
	return 0;
}