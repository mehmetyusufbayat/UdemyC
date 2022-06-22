#include<stdio.h>
#include<string.h>

#define	SIZE	100

int main() {
	char str[SIZE];
	printf("Enter any string:");
	scanf("%s", str);
	printf("%d", strlen(str));
}
