#include <stdio.h>
#define SIZE 10

int main() {
	int key, i;
	int list[SIZE] = { 10,20,30,40,50,60,70,80,90,100 };

	printf("[ ");

	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}

	printf("]\n");

	printf("Enter the number : ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("Your index : %d\n", i);
			break;
		}
	}
	return 0;
}