#include<stdio.h>
#include<string.h>

#define	SIZE	100

int main(){
	char s1[SIZE] = "The wanted character is here";
	char s2[SIZE] = "are";
	
	
	char *p = strstr(s1, s2);
	
	if(p == NULL)
		printf("The wanted character was not found.\n");
	else
		printf("The wanted character was found.\n");
}
