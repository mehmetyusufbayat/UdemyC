#include<stdio.h>
#include<stdlib.h>

int main(){
	char str[100];
	int x = 10;
	double dval = 23.54;
	sprintf(str, "%d %f", x, dval);
	puts(str);
}
