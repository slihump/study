//20223068 �̼��� 9�����

//1������

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int get_array_mul(int *p, int size) {
//	int result = 1;
//	
//	for (int i = 0; i < size; i++) {
//	result *= p[i];
//	}
//
//	return result;
//}
//
//int main() {
//	int arr[5];
//	int result;
//
//	for (int i = 0; i < 5; i++) {
//		printf("arr�迭�� %d°�� �Է��ϼ��� : ", i);
//		scanf("%d", &arr[i]);
//	}
//	
//	result = get_array_mul(&arr, 5);
//
//	printf("�迭�� ���� �� : %d", result);
//
//	return 0;
//}

//2������

//#include<stdio.h>
//#define SIZE 5
//
//void change_array(int* p, int size) {
//	int temp[SIZE] = {0};
//
////temp = p
//	for (int i = 0; i < size; i++) {
//		temp[i] = p[i];
//	}
//
////temp�� �ݴ밡 p����
//	for (int i = 0, j = size - 1; i < size; i++, j--) {
//		p[i] = temp[j];
//	}
//}
//
//int main() {
//	int a[SIZE] = { 1,2,3,4,5 };
//	
//	printf("�迭 �ٲٱ� �� : ");
//	for (int i = 0; i < SIZE; i++) {
//		printf("a[%d] = %d ", i, a[i]);
//	}
//	printf("\n");
//
//	change_array(&a, SIZE);
//
//	printf("�迭 �ٲ� �� : ");
//	for (int i = 0; i < SIZE; i++) {
//		printf("a[%d] = %d ",i, a[i]);
//	}
//	printf("\n");
//}