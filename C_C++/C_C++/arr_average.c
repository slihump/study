#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define STUDENTS 5

int main() {
	int s[STUDENTS];
	int average = 0;
	int s_temp[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("%d ��° �л��� ������ �Է��ϼ���. : ", i);
		scanf("%d", &s[i]);
	}

	printf("\n");

	for (int i = 0; i < STUDENTS; i++) {
		printf("%d ��° �л��� ���� = %d\n", i, s[i]);
	}

	printf("\n");

	//i�� j�� ���� 0�������� 5���� ���� �ð� �پ���,
	//s_temp�迭�� ���� ���� �κк��� s�迭�� ���� ū �κ��� ���ʷ� ����.
	for (int i = 0, j = STUDENTS - 1; i <= STUDENTS - 1; i++, j--) {
		s_temp[i] = s[j];
		printf("%d ��° �л��� ���� : %d\n", i, s_temp[i]);
	}

	//average������ s�迭�� ���� ���� �ε����� i�� �ϳ��� Ŀ�������� ���ذ�
	for (int i = 0; i < STUDENTS; i++) {
		average += s[i];
	}

	average = average / (STUDENTS);

	printf("\n��� �л����� ��� : %d", average);
}
