#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check_prime(int n);

int main() {
	int n, flag = 0;
	printf("양의 정수를 입력: ");
	scanf("%d", &n);

	for (int i = 2; i < n; i++) {
		if (check_prime(1) == 1) {
			if (check_prime(n - i) == 1) {
				printf("%d = %d + %d\n", n, i, n - i);
				flag = 1;
			}
		}
	}
}

int check_prime(int n) {
	int is_prime = 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}