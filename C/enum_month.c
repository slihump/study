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
		printf("��"); break;
	case Jun:
	case Jul:
	case Aug:
		printf("����"); break;
	case Sep:
	case Oct:
	case Nov:
		printf("����"); break;
	case Dec:
	case Jan:
	case Feb:
		printf("�ܿ�"); break;
	default:
		printf("������ �������� �ʴ� ����"); break;
	}
}

enum month select_month(void) {
	int tmp;

	do {
		printf("�� ���Դϱ�? :");
		scanf("%d", &tmp);
	} while (tmp < Jan && tmp > Dec);
	return tmp;
}

int main(void) {
	enum month your_month;

	printf("�¾ ���� �Է����ּ���. ");
	your_month = select_month();

	printf("����� ");
	print_season(your_month);
	printf("�� �¾����.\n");

	return 0;
}