#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int p;

	printf("점수: ");
	scanf("%d", &p);

	if (p < 0 || p > 100)
		puts("올바르지 않은 점수입니다.");
	else if (p <= 59)
		puts("불가");
	else if (p <= 69)
		puts("가능");
	else if (p <= 79)
		puts("양호");
	else
		puts("우수");

	return 0;
}