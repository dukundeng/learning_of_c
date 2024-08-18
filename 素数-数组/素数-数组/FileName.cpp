#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isprime(int x,int prime[],int numberofprime)
{
	for (int i = 0; i < numberofprime; i++) {
		if (x % prime[i] == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	const int n = 100;
	int prime[n] = { 2 };
	int count = 1;
	int i = 3;
	int a;

	printf("ÇëÊäÈëÊý×Ö\n");
	scanf_s("%d", &a);
	while (i < a) {
		if (isprime(i,prime,count) == true) {
			prime[count++] = i;
		}
		i++;
	}
	for (int i = 0; i < 100; i++) {
		printf("%d ", prime[i]);
	}
	return 0;
}