//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char s[] = "ABC";
//	char str[48];
//
//	printf("���ڿ� str : ");
//	scanf("%s", str);
//	printf("���ڿ� s �� \"%s\"�Դϴ�.\n", s);
//	printf("���ڿ� str�� \"%s\"�Դϴ�.\n", str);
//	s[0] = '\0';
//	str[0] = 0;
//	printf("���ڿ� s�� �� ���ڿ� \"%s\"�� �߽��ϴ�.\n", s);
//	printf("���ڿ� str�� �� ���ڿ� \"%s\"�� �߽��ϴ�.\n", str);
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
//	printf("���ڿ��� �Է��ϼ��� :");
//	scanf("%s", str);
//
//	printf("���ڿ� str�� \"%s\"�Դϴ�. \n", str);
//	null_string(str);
//	printf("���ڿ� str�� �� ���ڿ� \"%s\"�� �߽��ϴ�.\n", str);
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

	printf("���ڿ��� �Է����ּ��� : ");
	scanf("%s", str);

	del_digit(str);

	puts("���� ���ڸ� �����߽��ϴ�.");
	printf("str=%s\n", str);

	return 0;
}