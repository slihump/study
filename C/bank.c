#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int mymoney;
int save(int amount);
int draw(int amount);

int main() {
	int work;
	int money;

	while (1) {
		printf("****하나를 선택하시오****\n<1> 잔고 확인\n<2> 입금\n<3> 인출\n<4> 종료\n");
		scanf("%d", &work);

		if (work == 1) {
			system("cls");
			printf("잔액 : %d\n\n", mymoney);
		}

		else if (work == 2) {
			printf("****입금 금액을 입력하시오\n");
			scanf("%d", &money);
			save(money);
		}

		else if (work == 3) {
			printf("****인출 금액을 입력하시오\n");
			scanf("%d", &money);
			if (money == 0) {
				printf("0원 이상의 금액을 입력해주세요.\n\n");
			}
			else if (money <= mymoney) {
				draw(money);
			}
			else {
				system("cls");
				printf("잔액이 부족합니다.\n\n");
				main();
			}
		}

		else if (work == 4) {
			exit(0);
		}
		else continue;
	}
}

int save(int amount) {
	system("cls");
	printf("남은 잔고는 %d입니다.\n\n", mymoney += amount);
	return 0;
}

int draw(int amount) {
	system("cls");
	printf("남은 잔고는 %d입니다.\n\n", mymoney -= amount);
	return 0;
}