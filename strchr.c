#include<stdio.h>
#include<string.h>

#define	SIZE	100

int main(){
	char str[SIZE] = "Mehmet Yusuf BAYAT";
	char *p = strchr(str, 'Y');
	
	if(p == NULL)
		printf("aranan karakter bulunamadi\n");
	else
	printf("aranan karakter bulundu %d indisli karakter...\n", p-str+1);
}
