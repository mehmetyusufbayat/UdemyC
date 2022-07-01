#include<stdio.h>

typedef struct Student {
	char mname[20];
	char mlast_name[20];
	int mmath;
	int mchemistry;
}Student;

int main() {
	Student s1;
	Student* ps = &s1;
	ps -> mmath = 75;
	printf("math=%d", ps->mmath);
}
