#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int*, int*);
int main() {
	int A = 0, B = 0;
	printf("Input:\n");
	scanf("%d %d",&A,&B);
	printf("Output:\n");
	swap(&A, &B);
	printf("%d %d\n",A,B);
	return 0;
}
void swap(int* a, int* b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}