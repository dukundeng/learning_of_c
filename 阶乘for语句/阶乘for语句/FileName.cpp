#include <stdio.h>

int main()
{
	int a;
	int b=1;
	int c=1;

	printf("ÇëÊäÈëÊı×Ö:\n");
	scanf_s("%d", &a);

	for(b==1;b<=a;b++){
		c *= b;
		//printf("b=%d,c=%d\n", b, c);
	}
	printf("%d", c);
	return 0;
}