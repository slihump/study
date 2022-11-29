#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void main_Menu();
void check_Balance(int balance);
int money_Save(int balance);
int money_Draw(int balance);
void error_Message();

int main() {
	int balance = 10000;
	int choose;
	bool again = true;

	while (again) {
		main_Menu();
		scanf("%d", &choose);

		switch (choose) {
		case 1:
			check_Balance(balance);
			break;
		case 2:
			balance = money_Save(balance);
			break;
		case 3:
			balance = money_Draw(balance);
			break;
		case 4:
			again = false;
			break;
		default:
			error_Message();
			break;
		}
		system("cls");
	}
}

void main_Menu() {
	printf("*****메뉴를 선택해 주세요*****\n");
	printf("<1> 잔고 확인\n");
	printf("<2> 입금\n");
	printf("<3> 인출\n");
	printf("<4> 종료\n");
}

void check_Balance(int balance) {
	printf("****잔고는 %d입니다.\n\n", balance);
	printf("아무키나 누르세요\n");
	getc();
}

int money_Save(int balance) {
	int save;
	bool back = true;

	while (back) {
		printf("****금액을 입력하세요 : ");
		scanf("%d", &save);

		if (balance >= save && balance <= save) {
			printf("\n잔고는 %d입니다.\n", balance += save);
		}
		else {}
		back = false;
		printf("\n\n(아무키나 눌러주세요.)");
		getc();
	}
	return balance;
}

int money_Draw(int balance) {
	int draw;
	bool back = true;

	while (back) {
		printf("****금액을 입력하세요 : ");
		scanf("%d", &draw);
		if (balance >= draw) {
			printf("\n잔고는 %d입니다.\n", balance -= draw);
		}
		else {
			printf("잔고가 부족합니다.\n");
		}
		printf("\n\n(아무키나 눌러주세요.)");
		back = false;
		getc();
	}
	return balance;
}

void error_Message() {
	printf("\n\n잘못된 값을 입력받았습니다.");
}
