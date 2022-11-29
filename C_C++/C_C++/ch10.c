//20223068 이수혁 10장과제

//1번문제
// 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[10];
//
//	printf("문자열 입력 (9자 미만): \n");
//	gets_s(str, 10);
//
//	for (int i = 0; i < 10; i++) {
//		if (str[i] == 'a') {
//			printf("%d ", i + 1);
//		}
//	}
//}

//2번문제
// 
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char password[] = "devsign";
//	char put_pwd[10];
//
//	printf("\n비밀번호 : ");
//	gets_s(put_pwd, 10);
//
//	if (strcmp(password, put_pwd) == 0) {
//		printf("비밀번호 일치");
//		exit();
//	}
//
//	else {
//		printf("비밀번호 비일치");
//		main();
//	}
//}