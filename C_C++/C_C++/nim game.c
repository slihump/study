#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	int stick = 12;
	int get = 0;
	int random = 0;

	while (stick >= 0) {
		printf("\n현재 스틱의 개수:%d\n", stick);

		printf("몇개의 스틱을 가져가겠습니까? : ");
		scanf("%d", &get);
		
		if (get >= 4) {
			printf("4개 이상은 가져갈 수 없습니다.");
			printf("\n다시 선택 해주세요(4이상은 선택 할 수 없습니다.) : ");
			scanf("%d", &get);
				continue;
		}

		stick = stick - get;

		if (stick <= 0) {
			printf("\n사용자의 패배.");
			exit(0);
		}
		srand(time(NULL));
		random = rand() % 4;
		
		printf("**컴퓨터는 %d개의 스틱을 가져갔습니다.\n", random);
		
		stick = stick - random;
		if (stick <= 0) {
			printf("\n컴퓨터의 패배");
			exit(0);
		}
	}
return 0;
}