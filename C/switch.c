#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int no;
	puts("정수를 입력하세요: ");
	scanf("%d", &no);
	switch (no % 2) {
	case 0: puts("짝수"); break;
	case 1: puts("홀수"); break;
	}
	return 0;
}