#include <stdio.h>
#define STUDENTS 5

int main() {
	int s[STUDENTS];
	int average = 0;
	int s_temp[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("Number %d student's score: ", i);
		scanf("%d", &s[i]);
	}

	printf("\n");

	for (int i = 0; i < STUDENTS; i++) {
		printf("Number %d student's score is %d\n", i, s[i]);
	}

	printf("\n");

	for (int i = 0, j = STUDENTS - 1; i <= STUDENTS - 1; i++, j--) {
		s_temp[i] = s[j];
		printf("reverse : %d\n", s_temp[i]);
	}

	for (int i = 0; i < STUDENTS; i++) {
		average += s[i];
	}

	average = average / (STUDENTS);

	printf("\n total average : %d", average);
}
