#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[] = "ABC";
	char str[48];

	printf("���ڿ� str : ");
	scanf("%s", str);
	printf("���ڿ� s �� \"%s\"�Դϴ�.\n", s);
	printf("���ڿ� str�� \"%s\"�Դϴ�.\n", str);
	s[0] = '\0';
	str[0] = 0;
	printf("���ڿ� s�� �� ���ڿ� \"%s\"�� �߽��ϴ�.\n", s);
	printf("���ڿ� str�� �� ���ڿ� \"%s\"�� �߽��ϴ�.\n", str);

	return 0;
}