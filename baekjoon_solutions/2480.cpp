#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b) {
		if (b == c)
			printf("%d", 10000 + a * 1000);
		else
			printf("%d", 1000 + a * 100);
	}
	else if (b == c) printf("%d", 1000 + b * 100);
	else if (a == c) printf("%d", 1000 + a * 100);
	else {
		int m = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : c;
		printf("%d", 100 * m);
	}

	return 0;
}