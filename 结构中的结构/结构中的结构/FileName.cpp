#include <stdio.h>

struct time {
	int hour;
	int minute;
	int second;
};

void timeupdate(struct time* p)
{
	if (p->second == 59) {
		if (p->minute == 59) {
			if (p->hour == 23) {
				p->hour = 00;
				p->minute = 00;
				p->second = 00;
			}
			else {
				p->hour++;
				p->minute = 00;
				p->second = 00;
			}
		}
		else {
			p->minute++;
			p->second = 0;
		}
	}
	else {
		p->second++;
	}
}
void in(struct time* p)
{
	printf("请依次输入小时，分钟，秒：\n");
	scanf_s("%d %d %d", &p->hour, &p->minute, &p->second);
}
void out1(struct time* p) {
	printf("现在是%d时%d分%d秒\n", p->hour, p->minute, p->second);
}
void out2(struct time* p) {
	printf("一秒钟后是%d时%d分%d秒\n", p->hour, p->minute, p->second);
}

int main()
{
	const int a = 5;
	struct time texttimes[a];
	for (int i = 0; i < a; i++) {
		in( &texttimes[i]);
		out1(&texttimes[i]);
		timeupdate(&texttimes[i]);
		out2(&texttimes[i]);
		printf("\n");
	}
	return 0;
}