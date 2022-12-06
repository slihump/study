#include <stdio.h>
 
void swap(int *x, int *y) {
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int x = 10, y = 20;
	printf("Before swap: x=%d, y=%d\n", x, y);

	swap(&x, &y);

	printf("After swap: x=%d, y=%d\n", x, y);

	return 0;
}