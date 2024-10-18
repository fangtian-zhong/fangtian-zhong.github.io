#include<stdio.h>
#include<string.h>
#include "student.h"
#include "student.h"

int main(){
     Student student;
     scanf("%s%d%lf", student.name,&(student.id), &(student.gpa));
     printf("%s %d %f\n", student.name, student.id, student.gpa);
     student = get_student();
     printf("%s %d %f\n", student.name, student.id, student.gpa);
     printf("student addr=%p\n", &student);
     return 0;
}
