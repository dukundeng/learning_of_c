#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool prime(int x) 
{
	if (x <= 1) {
		return false;
	}
	else {
		int i = 2;
		for (i = 2; i <= sqrt(x); i++) {
			if (x % i == 0) {
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int a;
	int b;
	int sum = 0;

	printf("请输入数字区间:\n");
	scanf_s("%d %d", &a, &b);
	
	int cnt;
	for (cnt = a; cnt <= b; cnt++) {
		if (prime(cnt)) {
			//printf("%d\n", cnt);
			sum += cnt;
		}
	}
	printf("%d\n", sum);

	return 0;
}