#include <stdio.h>
 
void swap(int *x, int *y) {
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int x = 10, y = 20;
	printf("swap함수를 호출하지 않았을 때 main함수에서의 x=%d, y=%d\n", x, y);

	swap(&x, &y);

	printf("swap함수를 호출하고 난 뒤의 main함수에서의 x=%d, y=%d\n", x, y);

	return 0;
}