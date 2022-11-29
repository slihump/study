#include <stdio.h>
#include <string.h>

int count = 0;

void call_main() {
	count += 1;

	if (count >= 5) {
		printf("\n[HINT: 동아리 이름]\n");
	}
	main();
}

int main() {
	char password[] = "devsign";
	char put_pwd[10];

	printf("\n비밀번호 : ");
	gets_s(put_pwd, 10);

	if (strcmp(password, put_pwd) == 0) {
		printf("\n비밀번호 일치");
		exit();
	}

	else {
		printf("비밀번호 비일치\n");
		printf("비밀번호가 %d회 틀렸습니다.\n", count + 1);

		call_main();
	}
}
