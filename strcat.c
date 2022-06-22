#include<stdio.h>
#include<string.h>

#define	SIZE	100

int main(){
	char s1[SIZE] = "makine";
	char s2[SIZE] = "muhendisi";
	
	puts(s1);
	puts(s2);
	strcat(s1,s2);
	puts(s1);
	puts(s2);
}
