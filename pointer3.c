#include<stdio.h>

void func(int*x){
	*x = 500;
}

void swap(int*a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a = 30;
	printf("a=%d\n", a);
	func(&a);
	printf("a=%d\n", a);
	printf("**********************\n");
	
	int x = 20, y = 30;
	printf("x=%d y=%d\n", x, y);
	swap(&x, &y);
	printf("x=%d y=%d\n", x, y);
}
