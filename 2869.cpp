#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	v -= a;
	if (v % (a - b) == 0) printf("%d", v / (a - b) + 1);
	else printf("%d", v / (a - b) + 2);

	return 0;
}