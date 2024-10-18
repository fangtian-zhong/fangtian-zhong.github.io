#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
     char name[20];
     int id;
     double gpa;
}Student;

Student get_student(){
	Student student;
	scanf("%s%d%lf", student.name, &(student.id), &(student.gpa));
	printf("student addr=%p\n", &student);
        return student;
}
#endif
