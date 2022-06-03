#include<stdio.h>

#define	SIZE	15

int	main() {
	
	int	a[SIZE] = {[3] = 3, [7] =7};
	int i = 0;
	while (i<SIZE){
		printf("%d ", a[i]);
		++i;
	}
}
