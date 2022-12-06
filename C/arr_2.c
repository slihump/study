#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 26

int main() {
	int codes[SIZE];

	for (int i = 0; i < SIZE; i++) {
		codes[i] = 'a' + i;
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%c ", codes[i]);
	}

	return 0;
}
