#include <stdio.h>
#include <stdbool.h>

struct date {
	int month;
	int day;
	int year;
};

bool isleap(struct date p) {
	if (p.year % 4 == 0 && p.year % 100 ==0) {
		return true;
	}
	else {
		return false;
	}
}

int numberofdays(struct date p) {
	int number;
	int numberofpermonth[13] = { -1,31,29,31,30,31,30,31,31,30,31,30,31, };
	if (isleap(p)) {
		numberofpermonth[3] = 28;
	}
	number = numberofpermonth[p.month];
	return number;
}

int main(int argc, char const* argv[])
{
	struct date day;
	printf("请依次输入月，日，年：\n");
	scanf_s("%d %d %d", &day.month, &day.day, &day.year);

	if (day.day != numberofdays(day)) {
		day.day++;
	}
	else if (day.month != 12) {
		day.day = 1;
		day.month++;
	}
	else {
		day.day = 1;
		day.month = 1;
		day.year++;
	}
	printf("明天是%d年%d月%d日\n", day.year, day.month, day.day);
	return 0;
}