//20223068 �̼��� 8�����

//1�� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mymoney;

int save(int amount) {
	printf("���ݵ� �ݾ��� %d �Դϴ�.\n", mymoney += amount);
	return 0;
}

int draw(int amount) {
	printf("���ݵ� �ݾ��� %d �Դϴ�.\n", mymoney -= amount);
	return 0;
}

int main() {
	int work;
	int money;

	while (1) {

		printf("� �۾��� �Ͻðڽ��ϱ�? (�Ա� = 1, ��� = 2, ������ = 3): ");
		scanf("%d", &work);

		if (work == 1) {
			printf("�󸶸� �Ա� �Ͻðڽ��ϱ�? : ");
			scanf("%d", &money);
			save(money);
		}

		else if (work == 2) {
			printf("�󸶸� ��� �Ͻðڽ��ϱ�? : ");
			scanf("%d", &money);
			draw(money);
		}

		else if (work == 3)
			break;

		else continue;
	}
}

//2������

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int comb(int n, int r) {
//	if (n == r || r == 0)
//		return 1;
//	return comb(n - 1, r - 1) + comb(n - 1, r);
//}
//
//int main() {
//	int rel;
//	int n, k;
//
//	printf("n�� k�� ���� �Է��ϼ���. : ");
//	scanf("%d %d", &n, &k);
//
//	rel = comb(n, k);
//
//	printf("�� = %d\n", rel);
//}