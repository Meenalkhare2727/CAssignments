#include<stdio.h>

typedef struct student  // first struct declare
{
 int roll_no;              // struct members
 char name[20];
 int standard;

 }stud_t;               // struct variable


void accept_student_info(stud_t *s);  //function declare
void print_student_info(stud_t s);


int main(){
stud_t s1;

 accept_student_info(&s1);     //  function call
 print_student_info(s1);

return 0;
}
void accept_student_info(stud_t *s){

printf("Enter student's roll number , name, standard \n");
scanf("%d  %s  %d", &s->roll_no, s->name, &s->standard);

}
void print_student_info(stud_t s)
{
printf("Roll number of student =%d, name=%s,standard=%d\n",s.roll_no, s.name,s.standard);


} 



