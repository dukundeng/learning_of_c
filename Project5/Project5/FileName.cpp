#include <stdio.h>

int main()
{
	double foot, inch, tallth;
	printf("请依次输入英尺与英寸。\n");
	scanf_s("%lf %lf", &foot, &inch);

	tallth = (foot + inch / 12) * 0.3048;

	printf("您的升高为%.3fm\n", tallth);

	return 0;

}