#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SCORE 120
#define S_AVER 2.0

int main() {
	int get_score;
	double get_aver;

	printf("������� ȹ���� �������� �Է��Ͻÿ� : ");
	scanf("%d", &get_score);
	printf("������� ȹ���� ��������� �Է��Ͻÿ� : ");
	scanf("%lf", &get_aver);

	if (SCORE <= get_score && S_AVER <= get_aver) {
		printf("������ �����մϴ�.");
	}
	else printf("������ �Ұ��� �մϴ�.");
}