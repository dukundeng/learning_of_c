#include <stdio.h>

struct point {
	int x;
	int y;
};
void getstruct(struct point *p)
{
	scanf_s("%d", &p -> x);
	scanf_s("%d", &p -> y);
}
int main(int argy, const char* argc[])
{
	struct point y;
	getstruct(&y);
	printf("%d %d", y.x, y.y);
	return 0;
}