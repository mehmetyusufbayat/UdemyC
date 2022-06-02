#include<stdio.h>

#define VERSION 2

int	main(){
#if VERSION>0 && VERSION<5
	printf("Version:%d", VERSION);
#elif VERSION>=5 && VERSION<10
	printf("Version:%d", VERSION);
#elif VERSION>=10 && VERSION<15
	printf("Version:%d", VERSION);
#else
	printf("Nothing...\n");
#endif
}
