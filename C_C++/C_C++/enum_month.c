#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum month {
	Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

void print_season(enum month month) {
	switch (month) {
	case Mar:
	case Apr:
	case May:
		printf("봄"); break;
	case Jun:
	case Jul:
	case Aug:
		printf("여름"); break;
	case Sep:
	case Oct:
	case Nov:
		printf("가을"); break;
	case Dec:
	case Jan:
	case Feb:
		printf("겨울"); break;
	default:
		printf("지구에 존재하지 않는 계절"); break;
	}
}

enum month select_month(void) {
	int tmp;

	do {
		printf("몇 월입니까? :");
		scanf("%d", &tmp);
	} while (tmp < Jan && tmp > Dec);
	return tmp;
}

int main(void) {
	enum month your_month;

	printf("태어난 월을 입력해주세요. ");
	your_month = select_month();

	printf("당신은 ");
	print_season(your_month);
	printf("에 태어났군요.\n");

	return 0;
}