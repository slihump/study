#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int no;
	puts("������ �Է��ϼ���: ");
	scanf("%d", &no);
	switch (no % 2) {
	case 0: puts("¦��"); break;
	case 1: puts("Ȧ��"); break;
	}
	return 0;
}