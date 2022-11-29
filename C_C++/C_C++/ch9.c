//20223068 이수혁 9장과제

//1번문제

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
//		printf("arr배열의 %d째를 입력하세요 : ", i);
//		scanf("%d", &arr[i]);
//	}
//	
//	result = get_array_mul(&arr, 5);
//
//	printf("배열의 곱한 값 : %d", result);
//
//	return 0;
//}

//2번문제

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
////temp의 반대가 p가됨
//	for (int i = 0, j = size - 1; i < size; i++, j--) {
//		p[i] = temp[j];
//	}
//}
//
//int main() {
//	int a[SIZE] = { 1,2,3,4,5 };
//	
//	printf("배열 바꾸기 전 : ");
//	for (int i = 0; i < SIZE; i++) {
//		printf("a[%d] = %d ", i, a[i]);
//	}
//	printf("\n");
//
//	change_array(&a, SIZE);
//
//	printf("배열 바꾼 후 : ");
//	for (int i = 0; i < SIZE; i++) {
//		printf("a[%d] = %d ",i, a[i]);
//	}
//	printf("\n");
//}