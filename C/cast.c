#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double a, b;

	puts("2���� ������ �Է��ϼ���.");
	printf("���� a : "); scanf("%d", &a);
	printf("���� b : "); scanf("%d", &b);

	printf("a ���� b�� %f%%�Դϴ�.\n", (double)a / b * 100.0);

	return 0;
}