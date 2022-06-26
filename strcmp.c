#include<stdio.h>
#include<string.h>

#define SIZE	20

int main(){
	char s1[SIZE];
	char s2[SIZE];
	
	strcpy(s1, "ABc");
	strcpy(s2, "ABc");
	
	int result = strcmp(s1, s2);
	
	if (result < 0)
		printf("birinci yazi daha buyuk...\n");
	else if (result > 0)
		printf("ikinci yazi daha buyuk...\n");
	else
		printf("iki yazi esit");
}
