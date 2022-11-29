#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define STUDENTS 5

int main() {
	int s[STUDENTS];
	int average = 0;
	int s_temp[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("%d 번째 학생의 점수를 입력하세요. : ", i);
		scanf("%d", &s[i]);
	}

	printf("\n");

	for (int i = 0; i < STUDENTS; i++) {
		printf("%d 번째 학생의 점수 = %d\n", i, s[i]);
	}

	printf("\n");

	//i와 j가 각각 0에서부터 5에서 부터 늘고 줄어들며,
	//s_temp배열의 가장 작은 부분부터 s배열의 가장 큰 부분을 차례로 저장.
	for (int i = 0, j = STUDENTS - 1; i <= STUDENTS - 1; i++, j--) {
		s_temp[i] = s[j];
		printf("%d 번째 학생의 점수 : %d\n", i, s_temp[i]);
	}

	//average변수에 s배열의 가장 작은 인덱스를 i가 하나씩 커질때마다 더해감
	for (int i = 0; i < STUDENTS; i++) {
		average += s[i];
	}

	average = average / (STUDENTS);

	printf("\n모든 학생들의 평균 : %d", average);
}
