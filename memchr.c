#include<stdio.h>
#include<string.h>

int main() {
	char str[80] = "Ask guzeldir, sevmesini bilirsen; sevmek guzeldir, guvenmesini bilirsen";
	char *ps = memchr(str, 'A', 80);
	if (ps)
		printf("aranan karakter bulundu. Yazinin %d. elemani\n", ps-str+1);
	else
		printf("aranan karakter bulunmadi\n");
}
