#include<stdio.h>

int main(){
	
	int x = 20, y = 40;
	int* iptr = &x;
	
	printf("&x=%p\n", &x);
	printf("iptr=%p\n", iptr);
	printf("*iptr=%d\n", *iptr);
	printf("*******************\n");
	iptr = &y;
	printf("&y=%p\n", &y);
	printf("iptr=%p\n", iptr);
	printf("*iptr=%d\n", *iptr);
}
