#include<stdio.h>
#include<string.h>

#define	SIZE	100

int main(){
	char s1[SIZE] = "Mehmet";
	char s2[SIZE] = "Yusuf";
	char s3[SIZE] = "BAYAT";
	puts(s1);
	puts(s2);
	puts(s3);
	strcpy(s2,strcpy(s1,"BAYAT"));
	printf("\n");
	puts(s1);
	puts(s2);
	puts(s3);
}
