#include <stdio.h>

int main()
{
	int n1 = 0;
	int n2 = 0;
	int n5 = 0;

	for (n1 = 0; n1 <= 100; n1++) {
		for (n2 = 0; n2 <= 50; n2++) {
			for (n5 = 0; n5 <= 20; n5++) {
				if (10 == 0.1 * n1 + 0.2 * n2 + 0.5 * n5) {
					printf("����֧��%döһ�ǣ�%dö���ǣ�%dö��ǡ�\n", n1, n2, n5);
					//goto bed;
				}
				
			}
		}
	}
	//bed:
	return 0;
}