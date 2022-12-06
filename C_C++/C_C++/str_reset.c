//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char s[] = "ABC";
//	char str[48];
//
//	printf("문자열 str : ");
//	scanf("%s", str);
//	printf("문자열 s 는 \"%s\"입니다.\n", s);
//	printf("문자열 str은 \"%s\"입니다.\n", str);
//	s[0] = '\0';
//	str[0] = 0;
//	printf("문자열 s를 빈 문자열 \"%s\"로 했습니다.\n", s);
//	printf("문자열 str를 빈 문자열 \"%s\"로 했습니다.\n", str);
//
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void null_string(char s[]) {
//	s[0] = '\0';
//}
//
//int main() {
//	char str[128];
//
//	printf("문자열을 입력하세요 :");
//	scanf("%s", str);
//
//	printf("문자열 str은 \"%s\"입니다. \n", str);
//	null_string(str);
//	printf("문자열 str을 빈 문자열 \"%s\"로 했습니다.\n", str);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void del_digit(char s[]) {
	int i = 0, idx = 0;

	while (s[i]) {
		if (s[i] < 'A' || s[i] > 'z')
			s[idx++] = s[i];
		i++;
	}
	s[idx] = '\0';
}

int main(void) {
	char str[256];

	printf("문자열을 입력해주세요 : ");
	scanf("%s", str);

	del_digit(str);

	puts("숫자 문자를 삭제했습니다.");
	printf("str=%s\n", str);

	return 0;
}