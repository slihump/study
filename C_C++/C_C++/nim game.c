#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	int stick = 12;
	int get = 0;
	int random = 0;

	while (stick >= 0) {
		printf("\n���� ��ƽ�� ����:%d\n", stick);

		printf("��� ��ƽ�� �������ڽ��ϱ�? : ");
		scanf("%d", &get);
		
		if (get >= 4) {
			printf("4�� �̻��� ������ �� �����ϴ�.");
			printf("\n�ٽ� ���� ���ּ���(4�̻��� ���� �� �� �����ϴ�.) : ");
			scanf("%d", &get);
				continue;
		}

		stick = stick - get;

		if (stick <= 0) {
			printf("\n������� �й�.");
			exit(0);
		}
		srand(time(NULL));
		random = rand() % 4;
		
		printf("**��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n", random);
		
		stick = stick - random;
		if (stick <= 0) {
			printf("\n��ǻ���� �й�");
			exit(0);
		}
	}
return 0;
}