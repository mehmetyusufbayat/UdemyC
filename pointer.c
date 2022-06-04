#include<stdio.h>

int main(){
	int x = 20, y = 40, z = 60;
	int* ptr1 = &x, ptr2 = &y;
	
	printf("&x=%p\n", &x);
	printf("ptr1=%p\n", ptr1);
	
	printf("***********************\n");
	printf("&y=%p\n", &y);
	printf("ptr2=%p\n", ptr2);
	printf("&ptr2=%p\n", &ptr2);
}
