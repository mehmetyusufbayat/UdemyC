#include<stdio.h>

int main()
{
	int i;
	printf("ASCI Table\n");
	for (i = 32;i < 127; ++i)
	{
		putchar(i);
		printf(" %d", i);
		putchar(10);
	}
}
