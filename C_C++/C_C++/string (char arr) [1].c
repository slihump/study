#include <stdio.h>
#include <string.h>

int count = 0;

void call_main() {
	count += 1;

	if (count >= 5) {
		printf("\n[HINT: ���Ƹ� �̸�]\n");
	}
	main();
}

int main() {
	char password[] = "devsign";
	char put_pwd[10];

	printf("\n��й�ȣ : ");
	gets_s(put_pwd, 10);

	if (strcmp(password, put_pwd) == 0) {
		printf("\n��й�ȣ ��ġ");
		exit();
	}

	else {
		printf("��й�ȣ ����ġ\n");
		printf("��й�ȣ�� %dȸ Ʋ�Ƚ��ϴ�.\n", count + 1);

		call_main();
	}
}
