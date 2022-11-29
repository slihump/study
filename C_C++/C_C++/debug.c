#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14
#define CIRCLE_AREA(r) (((r)*2.0)*(PI))
#define DEBUG

int main() {

	double r;
#ifdef
	printf("디버깅모드 입니다.");
#endif
	printf("원의 반지름 : ");
	scanf("%lf", &r);
	printf("원의 면적 = %lf", CIRCLE_AREA(r));
}