#include<stdio.h>

typedef struct Student {
	char m_name[20];
	char m_surname[20];
	int m_mathexam[3];
	int m_student_no;
}Student;

void print_student(Student s) {
	printf("Name:%s Surname:%s MathExam=%d %d %d Student Number:%d", s.m_name, s.m_surname, s.m_mathexam[0], s.m_mathexam[1], s.m_mathexam[2], s.m_student_no);
}

int main(void) {
	Student s1 = {"Mehmet Yusuf","BAYAT",{40,65,95},159};
	print_student(s1);
}
