//1�� ����

//#include <stdio.h>
//
//int main() {
//	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//
//	for (int i = 0; i < 12; i++) {
//		printf("%d���� %d�� ���� �ֽ��ϴ�.\n", i + 1, days[i]);
//	}
//}

//2�� ����

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int x = 0;
//	int a[100];
//
//	printf("�Է��� ������ ���� : ");
//	scanf("%d", &x);
//
//	for (int i = 0; i < x; i++) {
//		printf("%d��° ��Ҹ� �Է��Ͻÿ� : ", i);
//		scanf("%d", &a[i]);
//	}
//	
//	for (x; x - 1 >= 0; x--) {
//		printf("%d ", a[x - 1]);
//	}
//}

//3�� ����

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int x = 0;
//	int a[100];
//	int result = 0;
//
//	printf("�Է��� ������ ���� : ");
//	scanf("%d", &x);
//
//	for (int i = 0; i < x; i++) {
//		printf("%d��° ��Ҹ� �Է��Ͻÿ� : ", i);
//		scanf("%d", &a[i]);
//	}
//
//	for (int i = 0; i < x; i++) {
//		result += a[i];
//	}
//	printf("��=%d", result);
//}

//4�� ����

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SIZE 5
//
//int main() {
//	int a[SIZE];
//	int temp;
//
//	for (int i = 0; i < SIZE; i++) {
//		printf("������ �Է��Ͻÿ� : ");
//		scanf("%d", &a[i]);
//	}
//
//	for ( int k = 0; k < SIZE; k++) {
//		for (int i = 0; i < SIZE - 1; i++) {
//			if (a[i] > a[i + 1]) {
//				temp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = temp;
//			}
//		}
//	}
//
//	printf("�ִ밪=%d ", a[SIZE - 1]);
//	printf("�ּҰ�=%d", a[0]);
//}

//5�� ����
//
//#include <stdio.h>
//
//int main() {
//
//	int score[3][3] = {
//	{30, 10, 11},
//	{ 40,90,32 },
//	{ 70,65,56 }
//	};
//	int std[3] = { 0 };
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			std[i] += score[i][j];
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		printf("�л�%d�� ������� : %d\n", i, std[i] / 3);
//	}
//}
// 
//6�� ����

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int x, y;
//	int multiple[10][10];
//
//	printf("�˰���� �������� �Է��Ͻÿ�(��: 9 3): ");
//	scanf("%d %d", &x, &y);
//
//	printf("%dX%d=%d", x, y, x * y);
//}

//7�� ����
// 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int a[3][3];
//	int b[3][3];
//	int c[3][3] = { 0 };
//
//	printf("�� ����=3\n�� ����=3\n");
//
//	printf("ù ��° ��� �Է�=\n");
//	
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	printf("�� ��° ��� �Է�=\n");
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &b[i][j]);
//		}
//	}
//
//	printf("\n");
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++) {
//				c[i][j] += a[i][k] * b[k][j];
//			}
//			printf("%d ", c[i][j]);
//		}
//		
//		printf("\n");
//	}
//	return 0;
//}
// 
//8�� ����
// 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int a[3][3];
//	int tran[3][3];
//
//	printf("�� ����=3\n�� ����=3\n");
//
//	printf("ù ��° ��� �Է�=\n");
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			tran[i][j] = a[j][i];
//		}
//	}
//
//	printf("\n");
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", tran[i][j]);
//		}
//		printf("\n");
//	}
//}

//9�� ����
// 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//	int random;
//	int num[10] = { 0 };
//	int count = 100;
//	int big = 0;
//
//	srand(time(NULL));
//
//	for (int i = 0; i < 100; i++) {
//
//		random = rand() % 10;
//
//		for (int j = 0; j < 10; j++) {
//			if (random == j) {
//				num[j] = num[j] + 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (num[i] > big) {
//			big = num[i];
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {
//		if (big == num[i]) {
//			printf("���� ���� ���� �� �� = %d", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//10�� ����

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int count[6] = { 0 };
//	int random = 0;
//
//	srand(time(NULL));
//
//	for (int i = 0; i < 60000; i++) {
//		random = rand() % 6;
//		for (int j = 0; j < 6; j++) {
//			if (random == j)
//				count[j] = count[j] + 1;
//		}
//	}
//
//	printf("==============================\n");
//	printf("�ֻ�����			��\n");
//	printf("==============================\n");
//	for (int i = 0; i < 6; i++) {
//		printf("  %d			%d\n", i + 1, count[i]);
//	}
//
//	return 0;
//}

//11�� ����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int N;//�Էº���
//
//	printf("�Է��� ������ ����(100�� �̳���) : ");
//	scanf("%d", &N);
//
//	int inSu[100]; //�Է°������� ������ ������ �迭���� 
//	int Count1[100];//�Էµ� �� �� ���ߺ� ���� ���� �迭����
//	int Count2[100];//�Էµ� �� �� ���ߺ� ���� �󵵼��� ���� �迭����
//	int chk1, chk2;//�ߺ����� üũ����
//	int cnt;//���ߺ����� ������ ���� ���� 
//	int i, j;//�ݺ�����
//
//	//�Է� �� N���� ������ �Է��Ѵ�. 
//	for (i = 0; i < N; i++)
//	{
//		printf("%d��° ��Ҹ� �Է��Ͻÿ� : ", i);
//		scanf("%d", &inSu[i]);
//	}
//
//	//�Էµ� �� �� ���ߺ����� ���Ѵ�.
//	chk1 = inSu[0];
//	Count1[0] = inSu[0];
//	cnt = 1;
//	for (i = 1; i < N; i++)
//	{
//		if (chk1 != inSu[i])
//		{
//			chk2 = 1;
//			for (j = 0; j < cnt; j++)
//				if (inSu[i] == Count1[j])
//				{
//					chk2 = 0;
//					break;
//				}
//			if (chk2)
//			{
//				Count1[cnt++] = inSu[i];
//				chk1 = inSu[i];
//			}
//		}
//	}
//
//	//���ߺ����� ������������ �����Ѵ�.
//	for (i = 0; i < cnt - 1; i++)
//		for (j = i + 1; j < cnt; j++)
//			if (Count1[i] > Count1[j])
//			{
//				int tmp = Count1[i];
//				Count1[i] = Count1[j];
//				Count1[j] = tmp;
//			}
//
//	//���ߺ����� �������� �Է������� �󵵼��� ���Ѵ�.
//	for (i = 0; i < cnt; i++)
//	{
//		Count2[i] = 0;
//		for (j = 0; j < N; j++)
//			if (Count1[i] == inSu[j])
//				Count2[i]++;
//	}
//
//	//������
//	for (i = 0; i < cnt; i++)
//		printf("%d���� %d�� ����\n", Count1[i], Count2[i]);
//
//	return 0;
//}

//12�� ����

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int gets;
//	int element[100];
//	int delpoint;
//
//	printf("�Է��� ������ ����(100�� �̳���):");
//	scanf("%d", &gets);
//
//	for (int i = 0; i < gets; i++) {
//		printf("%d��° ��Ҹ� �Է��Ͻÿ�:", i);
//		scanf("%d", &element[i]);
//	}
//
//	printf("������ ��ġ:");
//	scanf("%d", &delpoint);
//
//	for (int i = delpoint; i < gets; i++) {
//		element[i] = element[i + 1];
//	}
//	--gets;
//
//	printf("���ο� �迭: ");
//
//	for (int i = 0; i < gets; i++) {
//		printf("%d ", element[i]);
//	}
//}

//13�� ����

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void printArray(int arr[], int count) {
//	printf("-------------------------------\n");
//	printf(" 1 2 3 4 5 6 7 8 9 10\n");
//	printf("-------------------------------\n");
//	printf(" ");
//	for (int i = 0; i < count; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//}
//
//int main() {
//
//	char input;
//	int ans2;
//	int seats[10] = { 0 };
//
//	while (1) {
//
//		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ�n) ");
//		scanf(" %c", &input);
//
//		if (input == 'y') {
//
//
//
//			printf("\n");
//
//			printf("���° �¼��� �����Ͻðڽ��ϱ�? ");
//			scanf("%d", &ans2);
//
//			if (seats[ans2 - 1] == 0) {
//				seats[ans2 - 1] = 1;
//				printf("����Ǿ����ϴ�.\n");
//				printArray(seats, 10);
//			}
//
//			else {
//				printf("�̹� ����� �ڸ��Դϴ�.\n");
//			}
//
//		}
//		else if (input == 'n') {
//			return 0;
//		}
//	}
//}

//14�� ����

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	double arr[5];
//	double average = 0;
//	double sum = 0.0;
//	double v = 0.0;
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d��° �Ǽ��� �Է��Ͻÿ�: ", i);
//		scanf("%lf", &arr[i]);
//	}
//
//	for (int i = 0; i < 5; i++) {
//		sum += arr[i];
//	}
//
//	printf("���:%lf\n", average = sum / 5.0);
//
//	sum = 0.0;
//
//	for (int i = 0; i < 5; i++) {
//		sum += (arr[i] - average) * (arr[i] - average);
//	}
//
//	v = sum / 5.0;
//
//	printf("ǥ������:%lf", sqrt(v));
//}

//15�� ����

//#include <stdio.h>
//
//int main() {
//	int tile[10];
//	srand(time(NULL));
//
//	for (int i = 0; i < 10; i++)
//		tile[i] = '_';
//
//	int n = 10 / 2;
//	tile[n] = '*';
//
//	while (1) {
//		for (int i = 0; i < 10; i++)
//			printf("%c", tile[i]);
//		printf("\n");
//
//		getch();
//
//		tile[n] = '_';
//		int direction = rand() % 2;
//		if (direction) n++;
//		else n--;
//
//		if (n >= 10 || n < 0) break;
//
//		tile[n] = '*';
//	}
//}