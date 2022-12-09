#include <stdio.h>

int main() {
	int list[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int scan;
	int count = 0;

	printf("[ ");

	for (int i = 0; i < 10; i++) {
		printf("%d ", list[i]);
	}

	printf("]");

	printf("\nEnter your Number: ");
	scanf("%d", &scan);

	for (int i = 0; i < 10; i++) {
		if (scan == list[i]) {
			break;
		}
		else count++;
	}
	printf("\nYour index : %d", count);
}