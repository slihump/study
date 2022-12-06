#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[10];

	printf("문자열 입력 (9자 미만): \n");
	gets_s(str, 10);

	for (int i = 0; i < 10; i++) {
		if (str[i] == 'a') {
			printf("%d ", i + 1);
		}
	}
}