#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, n, total, a, b;
	total = 0;
	scanf("%d %d", &x, &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		total += a * b;
	}
	if (x == total) printf("Yes");
	else printf("No");
	return 0;
}