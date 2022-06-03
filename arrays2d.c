#include<stdio.h>

#define	ROW	4
#define COL	3

int main (){
	int	a[ROW][COL] = {{1,2,3},
						{4,5,6},
						{7,8,9},
						{10,11,12}};
	int i = 0, j =0;					
	for (i = 0; i <ROW;++i){
		for(j = 0; j < COL;++j)
			printf("%d\t", a[i][j]);
		printf("\n");
		}
}
