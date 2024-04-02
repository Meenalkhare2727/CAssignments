#include<stdio.h>
int main(){

student_rollno(stud_t);
student_name(stud_t);

stuct student{

int rollno[
char name[5][10]={"Meenal","Akash","Pranjal","Pranshi","Himanshu"};
float marks;
int standard;
}stud_t;

int main(){

stud_t s1;

student_rollno(&s1);
student_name(&s1);


}

student_rollno(stud_t *s){

printf("%d %s %f",("Enter roll number ,standard, marks"));
scanf("%d %s %f",&s->rollno,&s->standar,&s->marks);


}

student_name(stud_t *s){
 
printf("")


}
return 0;
}
