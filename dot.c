#include<stdio.h>

struct ComplexNumber {
	double mx;
	double my;
	int mz;
}n1,n2;

int main() {
	n1.mx = 20;
	n1.my = 30;
	n1.mz = 25;
	n2 = n1;
	printf("mx=%f my=%f mz=%d",n2.mx, n2.my, n2.mz);
}
