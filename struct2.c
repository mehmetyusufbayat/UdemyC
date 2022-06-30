#include<stdio.h>

struct Student {
	char mname[20];
	char mlast_name[20];
	int mmath;
	int mchemistry;
}s1 = {"Mehmet Yusuf", "BAYAT", 75, 65}, s2;

int main() {
	printf("name:%s last_name:%s math:%d chemistry:%d", s1.mname, s1.mlast_name, s1.mmath, s1.mchemistry);
}
