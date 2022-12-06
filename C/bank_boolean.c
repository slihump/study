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
	printf("*****�޴��� ������ �ּ���*****\n");
	printf("<1> �ܰ� Ȯ��\n");
	printf("<2> �Ա�\n");
	printf("<3> ����\n");
	printf("<4> ����\n");
}

void check_Balance(int balance) {
	printf("****�ܰ�� %d�Դϴ�.\n\n", balance);
	printf("�ƹ�Ű�� ��������\n");
	getc();
}

int money_Save(int balance) {
	int save;
	bool back = true;

	while (back) {
		printf("****�ݾ��� �Է��ϼ��� : ");
		scanf("%d", &save);

		if (balance >= save && balance <= save) {
			printf("\n�ܰ�� %d�Դϴ�.\n", balance += save);
		}
		else {}
		back = false;
		printf("\n\n(�ƹ�Ű�� �����ּ���.)");
		getc();
	}
	return balance;
}

int money_Draw(int balance) {
	int draw;
	bool back = true;

	while (back) {
		printf("****�ݾ��� �Է��ϼ��� : ");
		scanf("%d", &draw);
		if (balance >= draw) {
			printf("\n�ܰ�� %d�Դϴ�.\n", balance -= draw);
		}
		else {
			printf("�ܰ� �����մϴ�.\n");
		}
		printf("\n\n(�ƹ�Ű�� �����ּ���.)");
		back = false;
		getc();
	}
	return balance;
}

void error_Message() {
	printf("\n\n�߸��� ���� �Է¹޾ҽ��ϴ�.");
}
