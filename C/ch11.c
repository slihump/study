//20223068	이수혁 11장과제

//1번 문제

//#define _CRT_SECURE_NO_WARNINGS
//#include <math.h>
//#include <stdio.h>
//
//typedef struct _set {
//	int x;
//	int y;
//}set;
//
//int main() {
//	double result = 0;
//
//	set p1 = { 0,0 };
//	printf("첫 번째 점의 좌표를 입력하세요 (0 0): ");
//	scanf("%d %d", &p1.x, &p1.y);
//
//	set p2 = { 0,0 };
//	printf("두 번째 점의 좌표를 입력하세요 (0 0): ");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	result = sqrt(pow((double)p2.x - (double)p1.x, 2.0) + pow((double)p2.y - (double)p1.y, 2.0));
//
//	printf("두 점 사이의 거리 : %lf", result);
//}

//2번 문제

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct student {
//	int number;
//	char name[50];
//	double high;
//	double weight;
//};
//
//int main() {
//	struct student p1;
//
//	scanf("%d %s %lf %lf", &p1.number, &p1.name, &p1.high, &p1.weight);
//
//	printf("학번 : %d\n이름 : %s\n키 : %.1lf\n몸무게 : %.1lf", p1.number, p1.name, p1.high, p1.weight);
//}