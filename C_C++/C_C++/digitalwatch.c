#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
	int hour, min, sec;
	int alhour, almin, alsec;
	hour = min = sec = 0;

	printf("알람 설정 (시^분^초): ");

	scanf("%d %d %d", &alhour, &almin, &alsec);

	while (1) {
		system("cls");
		printf("%02d: %02d: %02d", hour, min, sec);
		sec++; //sec가 늘어남
		if (sec == 60) { min++;	sec = 0; } //sec60도달, min증가, sec은 0으로
		if (min == 60) { hour++; sec = 0; } //min60도달, hour증가, min은 0으로
		if (hour == 24) { hour = min = sec = 0; } //hour24도달, sec,min,hour 0으로
		Sleep(1000);
		//조건문이 모두 같아야 실행됨 빈곳엔 0을 넣어야함
		if (sec == alsec && min == almin && hour == alhour) { printf("\a\a\a\a");
		break;
		}
	}

	return 0;
}