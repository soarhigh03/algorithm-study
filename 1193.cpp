#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, n = 1, i = 0;
	scanf("%d", &x);
	while (1) {
		i += n;
		if (x <= i) {
			x -= (i-n);
			break;
		}
		n++;
	}
	if (n % 2 == 0) {
		printf("%d/%d", x, n - x + 1);
	}
	else {
		printf("%d/%d", n - x + 1, x);
	}
	return 0;
}