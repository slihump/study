#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money, price;
	int change = 0;

	printf("������ �� : ");
	scanf("%d", &money);

	printf("���� : ");
	scanf("%d", &price);

	change = money - price;

	printf("�Ž����� : %d", change);

	return 0;
}