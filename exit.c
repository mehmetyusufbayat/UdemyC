#include<stdio.h>
#include<stdlib.h>

void f2(){
	printf("f2 cagrildi\n");
	return;
	printf("c dersleri\n");
}
void f1(){
	printf("f1 cagrildi\n");
	//exit(0);
}

int main(){
	f2();
	f1();
	printf("mehmet");
	//exit(1);
}
