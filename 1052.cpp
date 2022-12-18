#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, k, i, min;
	scanf("%d %d", &n, &k);
	if (n < k) {
		printf("%d", k - n);
		return 0;
	}
	min = 2 * n;
	for (int j = 1; j <= k; j++) {
		i = j;
		
		while (1) {
			printf("반복문 진입, j = %d, i = %d\n", j, i);
			if (i >= n) {
				if (min > i) {
					min = i;
					printf("%d   %d\n", j, min);
				}
				break;
			}
			i *= 2;
		}
	}

	printf("%d\n", i);
	if (min == n) printf("-1");
	else printf("%d", min-n);

	return 0;
}