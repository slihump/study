#include <stdio.h>
int main() {
	int no;
	puts("Enter the integer: ");
	scanf("%d", &no);
	switch (no % 2) {
	case 0: puts("even number"); break;
	case 1: puts("odd number"); break;
	}
	return 0;
}