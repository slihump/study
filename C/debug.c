#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14
#define CIRCLE_AREA(r) (((r)*2.0)*(PI))
#define DEBUG

int main() {

	double r;
#ifdef
	printf("������� �Դϴ�.");
#endif
	printf("���� ������ : ");
	scanf("%lf", &r);
	printf("���� ���� = %lf", CIRCLE_AREA(r));
}