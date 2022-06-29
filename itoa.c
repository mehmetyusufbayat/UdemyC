#include<stdio.h>
#include<stdlib.h>

#define	SIZE	100

int main(){
	int ival;
	char str[SIZE];
	printf("bir tamsayi giriniz:");
	scanf("%d", &ival);
	itoa(ival, str, 2);
	printf("%s\n", str);
}
