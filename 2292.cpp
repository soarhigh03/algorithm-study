#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k, n, t;
	scanf("%d", &k);
	n = 1;
	t = 1;
	if (k == 1)
		printf("1");
	else {
		while (1) {
			if (k <= 1 + 6 * n) {
				printf("%d", t + 1);
				break;
			}
			t += 1;
			n += t;
		}
	}
	
	return 0;
}