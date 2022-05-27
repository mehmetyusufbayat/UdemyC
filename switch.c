#include<stdio.h>

int main(){
	int grade;
	printf("Enter your lesson's grade:");
	scanf("%d", &grade);
	switch(grade){
		case 1:printf("very bad\n");
			break;
		case 2:printf("bad\n");
			break;
		case 3:printf("average\n");
			break;
		case 4:printf("good\n");
			break;
		case 5:printf("perfect\n");
			break;
		default:printf("illegal grade...\n");
	}
}
