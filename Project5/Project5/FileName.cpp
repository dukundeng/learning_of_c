#include <stdio.h>

int main()
{
	double foot, inch, tallth;
	printf("����������Ӣ����Ӣ�硣\n");
	scanf_s("%lf %lf", &foot, &inch);

	tallth = (foot + inch / 12) * 0.3048;

	printf("��������Ϊ%.3fm\n", tallth);

	return 0;

}