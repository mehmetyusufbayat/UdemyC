#include<stdio.h>
#pragma pack(1)

struct Student{
	char name[9];
	char sname[9];
	int no;
}; s1,s2;

int main(){
	printf("%zu", sizeof(s1));
}
