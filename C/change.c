#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money, price;
	int change = 0;

	printf("Enter your money : ");
	scanf("%d", &money);

	printf("Enter the price : ");
	scanf("%d", &price);

	change = money - price;

	printf("Change : %d", change);

	return 0;
}