#include <windows.h>
#include <stdio.h>
#define SIZE 10

int main() {
	int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 38, 99, 66 };

	for (int k = 0; k < SIZE; k++) {
		system("cls");
		for (int i = 0; i < SIZE; i++) {
			if (list[i] > list[i + 1]) {
				int temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}
		}
		for (int i = 0; i < SIZE; i++) {
			for (int s = 0; s < list[i] / 10; s++) {
				printf("*");
			}
			printf("\n");
		}
		_getch();
	}
	return 0;
}