#include <stdio.h>
#include <string.h>

int main() {
	char str[10];

	printf("Please enter string (Printing 'a' index)(Under 9 digits): \n");
	scanf("%s", str);

	for (int i = 0; i < 10; i++) {
		if (str[i] == 'a') {
			printf("%d ", i + 1);
		}
	}
}