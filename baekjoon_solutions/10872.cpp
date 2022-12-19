#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n, int result) {
	if (n == 0) return 1;
	else { 
		return n*factorial(n-1,result); 
	}
}


int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d", factorial(n, 1));
	return 0;
}