#include <stdio.h>

int main() {
	int a, b;

	puts("Enter 2 integers.");
	printf("a : "); scanf("%d", &a);
	printf("b : "); scanf("%d", &b);

	printf("a is %.2lf of b.\n", (double)a / b * 100.0);

	return 0;
}