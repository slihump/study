#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int count = 0;

void hint() {
	count += 1;

	if (count >= 5) {
		printf("\n[HINT: club name]\n");
	}
}

int main() {
	bool T = true;
	char password[] = "devsign";
	char put_pwd[10];
	while(T) {
		printf("\nEnter the Password : ");
		scanf("%s",put_pwd);

		hint();

		if (strcmp(password, put_pwd) == 0) {
			printf("\n!!Success!!");
			T = false;
		}

		else {
			printf("!!INCORRECT!!\n");
			printf("Trying count: %d.\n", count);
		}
	}
	return 0;
}
