#include <stdio.h>

enum month {
	Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

void print_season(enum month month) {
	switch (month) {
	case Mar:
	case Apr:
	case May:
		printf("the spring"); break;
	case Jun:
	case Jul:
	case Aug:
		printf("the summer"); break;
	case Sep:
	case Oct:
	case Nov:
		printf("the fall"); break;
	case Dec:
	case Jan:
	case Feb:
		printf("the winter"); break;
	default:
		printf("a non-Earth season."); break;
	}
}

enum month select_month(void) {
	int tmp;

	do {
		printf("How month? :");
		scanf("%d", &tmp);
	} while (tmp < Jan && tmp > Dec);
	return tmp;
}

int main(void) {
	enum month your_month;

	printf("Enter the month of birth.");
	your_month = select_month();

	printf("You were born in ");
	print_season(your_month);

	return 0;
}