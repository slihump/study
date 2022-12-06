#include <stdio.h>
#define SIZE 5

int main() {
	int i, k;
	int temp;
	int List[SIZE] = { 16, 7, 9, 1, 3 };

	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (List[i] > List[i + 1]){
				temp = List[i];
				List[i] = List[i + 1];
				List[i + 1] = temp;
			}
		}
	}
	for (i = 0; i < SIZE; i++) {
		printf("%d ", List[i]);
		}
	return 0;
}