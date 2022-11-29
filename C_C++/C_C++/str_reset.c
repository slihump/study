#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[] = "ABC";
	char str[48];

	printf("문자열 str : ");
	scanf("%s", str);
	printf("문자열 s 는 \"%s\"입니다.\n", s);
	printf("문자열 str은 \"%s\"입니다.\n", str);
	s[0] = '\0';
	str[0] = 0;
	printf("문자열 s를 빈 문자열 \"%s\"로 했습니다.\n", s);
	printf("문자열 str를 빈 문자열 \"%s\"로 했습니다.\n", str);

	return 0;
}