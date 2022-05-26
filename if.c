#include<stdio.h>

int main(){
	int x, y;
	printf("enter two number:");
	scanf("%d%d", &x, &y);
	if(x<y)
		printf("maximum value is %d", y);
	else
		printf("maximum value is %d", x);
}
