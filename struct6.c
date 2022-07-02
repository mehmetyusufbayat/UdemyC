#include<stdio.h>

typedef struct Family {
	char father_name[20];
	char mother_name[20];
	int sibling_number;
}Family;

typedef struct Employee {
	char e_name[20];
	char e_surname[20];
	int e_identity;
	Family family_info;
}Employee;

int main() {
	Employee e1, e2;
	e1.e_identity = 506070;
	e1.family_info.sibling_number = 3;
	printf("sibling number:%d", e1.family_info.sibling_number);
}
