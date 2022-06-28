#include<stdio.h>
#include<stdlib.h>

void f2(){
	printf("f2 cagrildi\n");
}
void f1(){
	printf("f1 cagrildi\n");
}

int main(){
	atexit(f2);
	atexit(f1);
	printf("mehmet yusuf\n");
	abort();
	f1();
	f2();
}
