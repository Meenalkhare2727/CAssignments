#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	char name[20];
    int rollno;
	float marks;
    int standard;
}stud_t;

void accept_stud(stud_t *s);
void print_stud(stud_t *s);

int main(void){



stud_t *ptr=(stud_t *)malloc(sizeof(stud_t));

accept_stud(ptr);
accept_stud(ptr);

free(ptr);
return 0;
}
void accept_stud(stud_t *s){

printf("Enter details of a student: ( Name , Rollno, Marks, Standard)\n");
scanf("%s %d  %f  %d",s->name ,&s->rollno , &s->marks, &s->standard);


}
void print_stud(stud_t *s)
{

printf("Name of a student =%s,Roll no of Meenal=%d,Marks of Meenal=%f,Standard of Meenal=%d",s->name,s->rollno,s->marks,s->standard);


}


















