//20223068 이수혁 8장과제

//1번 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mymoney;

int save(int amount) {
	printf("저금된 금액은 %d 입니다.\n", mymoney += amount);
	return 0;
}

int draw(int amount) {
	printf("저금된 금액은 %d 입니다.\n", mymoney -= amount);
	return 0;
}

int main() {
	int work;
	int money;

	while (1) {

		printf("어떤 작업을 하시겠습니까? (입금 = 1, 출금 = 2, 끝내기 = 3): ");
		scanf("%d", &work);

		if (work == 1) {
			printf("얼마를 입금 하시겠습니까? : ");
			scanf("%d", &money);
			save(money);
		}

		else if (work == 2) {
			printf("얼마를 출금 하시겠습니까? : ");
			scanf("%d", &money);
			draw(money);
		}

		else if (work == 3)
			break;

		else continue;
	}
}

//2번문제

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
//	printf("n과 k의 값을 입력하세요. : ");
//	scanf("%d %d", &n, &k);
//
//	rel = comb(n, k);
//
//	printf("합 = %d\n", rel);
//}