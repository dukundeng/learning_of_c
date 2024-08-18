#include <stdio.h>

int main()
{
	int x;
	char a[][10] = { "fault","january","february","march","april","may","june","june","july","august","september","octomber","november","december" };
	scanf_s("%d", &x);
	printf("%s", a[x]);
	return 0;
}