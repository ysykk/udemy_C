#include <stdio.h>

void swap(int*, int*);

void main() {
	int a = 100, b = 200;
	swap(&a, &b);
	printf("a = %d\nb = %d", a, b);

}

void swap(int* num1, int* num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}