#include<stdio.h>

#define SIZE	3

typedef struct Student {
	char mname[20];
	char mlast_name[20];
	int mmath;
}Student;

int main() {
	Student s1;
	Student primary_school_Student[SIZE] = {{"merve","kahraman",70},{"ali","temiz",60},{"turgut","reis",90}};
	int i;
	for (i = 0; i < SIZE; ++i)
		printf("Name:%s Last_Name:%s Math_No:%d \n", primary_school_Student[i].mname, primary_school_Student[i].mlast_name, primary_school_Student[i].mmath);
}
