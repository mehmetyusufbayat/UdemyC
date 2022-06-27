#include<stdio.h>

#define	str(s)	#s
#define	str2(s1,s2)	printf(#s1" "#s2);

int main(){
	printf("%s\n", str(mehmet));
	printf("%s\n", str(123));
	printf("%s\n", str(123.4));
	puts(str(Turkiye));
	str2(Istanbul, Ankara);
}
