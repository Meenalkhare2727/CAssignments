// structure 
#include<stdio.h>

struct student{

int rollno;
char name[20];
float marks;
};
typedef struct student student_t;

int main (void)
{
student_t s1;

printf("Enter roll number:");
scanf("%d",&s1.rollno);


printf("Enter name of a student:");
scanf("%*c%[^\n]s",s1.name);

printf("Enter marks:");
scanf("%f",&s1.marks);

printf("Roll no=%d,name=%s,marks=%f\n",s1.rollno, s1.name, s1.marks);
return 0;
}
