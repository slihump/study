#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int p;

	printf("����: ");
	scanf("%d", &p);

	if (p < 0 || p > 100)
		puts("�ùٸ��� ���� �����Դϴ�.");
	else if (p <= 59)
		puts("�Ұ�");
	else if (p <= 69)
		puts("����");
	else if (p <= 79)
		puts("��ȣ");
	else
		puts("���");

	return 0;
}