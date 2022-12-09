#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main() {
	int stick = 12;
	int get = 0;
	int random = 0;

	while (stick >= 0) {
		printf("\nCurrent number of sticks :%d\n", stick);

		printf("How many sticks would you like to take? : ");
		scanf("%d", &get);
		
		if (get > 4) {
			printf("Can't take more than 4..");
			printf("\n Please do it again : ");
			scanf("%d", &get);
				continue;
		}

		stick = stick - get;

		if (stick <= 0) {
			printf("\n!!User defeat!!.");
			exit(0);
		}
		srand(time(NULL));
		random = rand() % 4;
		
		printf("**The computer took %d sticks..\n", random);
		
		stick = stick - random;
		if (stick <= 0) {
			printf("\n!!computer defeat!!");
			exit(0);
		}
	}
return 0;
}