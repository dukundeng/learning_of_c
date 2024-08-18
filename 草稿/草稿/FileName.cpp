#include <stdio.h>
#include <stdlib.h>
struct point {
	int x;
	int y;
};
struct point getstruct(void)
{
	struct point p;
	scanf_s("%d", &p.x);
	scanf_s("%d", &p.y);
	return p;
}
int main()
{
	struct point y;
	y = getstruct();
	printf("%d %d", y.x, y.y);
	return 0;
}