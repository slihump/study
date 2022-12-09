#include <stdio.h>

int main() {
	int p;

	printf("Enter your score: ");
	scanf("%d", &p);

	if (p < 0 || p > 100)
		puts("Please Enter correct value.");
	else if (p <= 59)
		puts("F");
	else if (p <= 69)
		puts("C");
	else if (p <= 79)
		puts("B");
	else
		puts("A");

	return 0;
}