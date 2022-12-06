#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x, y;
char board[3][3];

void referee();

int main() {

	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++) {
			board[x][y] = ' ';
		}
	}

	for (int k = 0; k < 9; k++) {
		printf("\n입력할 위치를 선택하세요 : ");
		scanf("%d %d", &x, &y);

		if (board[x][y] == 'X' || board[x][y] == 'O')
		{
			printf("이미 놓은 자리입니다!\n");
			k--;
			continue;
		}

		board[x][y] = (k % 2 == 0 ? 'X' : 'O');

		printf(" 0   1   2\n");

		for (int i = 0; i < 3; i++) {
			printf("---|---|---%d\n", i);
			printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
		}

		referee();
	}

	printf("[ draw ]");
}

void referee() {
	for (int i = 0; i < 3; i++) {
		//가로 검사 [O]
		if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O') {
			printf(" [ O win ]");
			exit();
		}
		//가로 검사 [X]
		else if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') {
			printf("[ X win ]");
			exit();
		}
		//세로 검사 [O]
		if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') {
			printf("[ O win ]");
			exit();
		}
		//세로 검사 [X]
		else if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
			printf("[ X win ]");
			exit();
		}
		//대각선 검사 [O]
		if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
			printf("[ O win ]");
			exit();
		}
		//대각선 검사 [X]
		else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
			printf("[ X win ]");
			exit();
		}
		//역대각선 검사 [O]
		if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
			printf("[ O win ]");
			exit();
		}
		//역대각선 검사 [X]
		else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
			printf("[ X win ]");
			exit();
		}
	}
}