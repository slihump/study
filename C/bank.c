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
		printf("****�ϳ��� �����Ͻÿ�****\n<1> �ܰ� Ȯ��\n<2> �Ա�\n<3> ����\n<4> ����\n");
		scanf("%d", &work);

		if (work == 1) {
			system("cls");
			printf("�ܾ� : %d\n\n", mymoney);
		}

		else if (work == 2) {
			printf("****�Ա� �ݾ��� �Է��Ͻÿ�\n");
			scanf("%d", &money);
			save(money);
		}

		else if (work == 3) {
			printf("****���� �ݾ��� �Է��Ͻÿ�\n");
			scanf("%d", &money);
			if (money == 0) {
				printf("0�� �̻��� �ݾ��� �Է����ּ���.\n\n");
			}
			else if (money <= mymoney) {
				draw(money);
			}
			else {
				system("cls");
				printf("�ܾ��� �����մϴ�.\n\n");
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
	printf("���� �ܰ�� %d�Դϴ�.\n\n", mymoney += amount);
	return 0;
}

int draw(int amount) {
	system("cls");
	printf("���� �ܰ�� %d�Դϴ�.\n\n", mymoney -= amount);
	return 0;
}