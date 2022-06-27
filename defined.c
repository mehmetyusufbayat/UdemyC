#include<stdio.h>

int main(void){
	
#define Ubuntu

#ifdef WINDOWS10
	printf("Windows10");
#else
	printf("Another operating system");
#endif
}
