#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t, k, n;
	int arr[15][15];
	scanf("%d", &t);
	for (int i = 0; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			if (i == 0)	arr[i][j] = j;
			else {
				if (j == 1) arr[i][j] = 1;
				else arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]); //줄바꿈 안했다고 틀리게 하는거 킹받네 ..
	}
	return 0;
}