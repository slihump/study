#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM 10

int main() {
	int i, no;
	char s[NUM][128];

	no = NUM;
	printf("%d개의 문자열을 입력하라(\"$$$$$\"로 중단).\n", NUM);
	for (i = 0; i < NUM; i++) {
		printf("s[%d] : ", i);
		scanf("%s", s[i]);
		if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0') {
			no = i;
			break;
		}
	}
	for (i = 0; i < no; i++) {
		printf("s[%d] = \"%s\"\n", i, s[i]);
	}
}