#include<stdio.h>
#include<stdlib.h>

int main(){
	char s1[100];
	printf("plaka giriniz:");
	scanf("%s", s1);
	int value1 = atoi(s1);
	int value2 = atoi(s1 + 5);
	printf("value1=%d\n", value1);
	printf("value2=%d\n", value2);
}
