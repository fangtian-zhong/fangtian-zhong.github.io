#include<stdio.h>
#include<string.h>
typedef struct{
     int id;
     double gpa;
     int year;
     int age;
}Student;
void printStudent(Student*);
int main(){
	Student student1;
	student1.id = 0;
        student1.gpa = 4.0;
        student1.year = 1;
        student1.age = 18;	
        printf(" %d %f %d %d\n", student1.id, student1.gpa, student1.year, student1.age);
	printf("%lu\n",sizeof(student1));
	printStudent(&student1);
        return 0;
}

void printStudent(Student *student){
       scanf("%d", &(student->id));
       scanf("%d", &((*student).id));
       printf("%d\n", student->id);
       printf("%f\n", student->gpa);
}
