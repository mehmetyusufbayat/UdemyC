#include<stdio.h>

int sum(int n1, int n2){
	int result = n1 + n2;
	return result;
}

int main(){
	int rst = sum(5,7);
	printf("%d", rst);
}
