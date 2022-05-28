#include<stdio.h>

int main(){
	int i = 20;
	while (i > 1){
		printf("%d ", i);
		if (i % 7 == 0){
			break;
		}
		i--;	
	}
	
}
