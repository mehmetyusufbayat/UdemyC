#include<stdio.h>
#include<string.h>

int main() {
	char str[80] = "Ask guzeldir, sevmesini bilirsen; sevmek guzeldir, guvenmesini bilirsen";
	memset(str+14, '!', 9);
	puts(str);
}
