#include <stdio.h>
#define SCORE 120
#define S_AVER 2.0

int main() {
	int get_score;
	double get_aver;

	printf("Please enter the number of credits you have earned so far.: ");
	scanf("%d", &get_score);
	printf("Please enter the credit average you have earned so far.: ");
	scanf("%lf", &get_aver);

	printf("Graduation is ");
	if (SCORE <= get_score && S_AVER <= get_aver) {
		printf("possible.");
	}
	else printf("impossible.");
}