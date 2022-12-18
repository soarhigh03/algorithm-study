#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, a, b, min;
	scanf("%d", &n);
	if (n % 5 == 0) printf("%d", n / 5);
	else {
		a = n / 5;
		while (1) {
			if (a < 0) {
				printf("-1");
				break;
			}
			if ((n - 5 * a) % 3 == 0) {
				printf("%d", a + (n - 5 * a) / 3);
				break;
			}
			else a--;
		}
	}
	return 0;
}