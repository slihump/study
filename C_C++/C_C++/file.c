#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = NULL;

	fp = fopen("test.txt", "w");

	if (fp == NULL) {
		printf("���� ���� ����\n");
	}
	else {
		printf("���� ���� ����\n");
	}

	fclose(fp);

	return 0;
}