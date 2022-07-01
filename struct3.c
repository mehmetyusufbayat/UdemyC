#include<stdio.h>

typedef struct Student {
	char mname[20];
	char mlast_name[20];
	int mmath;
	int mchemistry;
}Student;

int main() {
	Student s1 = {.mlast_name = "BAYAT", .mchemistry = 90};
	printf("last name:%s chemistry:%d", s1.mlast_name, s1.mchemistry);
}
