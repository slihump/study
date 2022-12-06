#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
	int hour, min, sec;
	int alhour, almin, alsec;
	hour = min = sec = 0;

	printf("Set the timer. (hh mm ss): ");

	scanf("%d %d %d", &alhour, &almin, &alsec);

	while (1) {
		system("cls");
		printf("%02d: %02d: %02d", hour, min, sec);
		sec++;
		if (sec == 60) { min++;	sec = 0; }
		if (min == 60) { hour++; sec = 0; }
		if (hour == 24) { hour = min = sec = 0; }
		Sleep(1000);

		if (sec == alsec && min == almin && hour == alhour) { printf("\a\a\a\a");
		break;
		}
	}

	return 0;
}