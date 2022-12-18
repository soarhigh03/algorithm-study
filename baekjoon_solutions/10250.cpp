#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t, h, w, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);

		if (n % h != 0) {
			if (n / h + 1 < 10) {
				printf("%d%02d\n", n % h, n / h + 1);
			}
			else printf("%d%d\n", n % h, n / h + 1);
		}
		else
			printf("%d%02d\n", h, n / h );
	}

	return 0;
}