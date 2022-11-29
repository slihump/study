#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double a, b;

	puts("2개의 정수를 입력하세요.");
	printf("정수 a : "); scanf("%d", &a);
	printf("정수 b : "); scanf("%d", &b);

	printf("a 값은 b의 %f%%입니다.\n", (double)a / b * 100.0);

	return 0;
}