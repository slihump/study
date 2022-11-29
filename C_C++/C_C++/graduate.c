#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SCORE 120
#define S_AVER 2.0

int main() {
	int get_score;
	double get_aver;

	printf("현재까지 획득한 학점수를 입력하시오 : ");
	scanf("%d", &get_score);
	printf("현재까지 획득한 학점평균을 입력하시오 : ");
	scanf("%lf", &get_aver);

	if (SCORE <= get_score && S_AVER <= get_aver) {
		printf("졸업이 가능합니다.");
	}
	else printf("졸업이 불가능 합니다.");
}