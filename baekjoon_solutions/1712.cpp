#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c) printf("-1");
	else {
		printf("%d", a / (c - b) + 1);
		/*
		while (1) {
			long long aa = a + b * n;
			long long cc = c * n;

			if (aa < cc) {
				printf("%lld\n\n", n);
				break;
			}
			n++;
		}
		*/
	}
	return 0;
}