//WAP to print a table
#include<stdio.h>
int main(){

 int i,num,table;
 printf("Enter a number:");
 scanf("%d",&num);
 printf("Table of %d\n",num);
 for(i=1;i<=10;i++)
 {
  table = num * i;
   
  printf("%d x %d = %d\n ",num,i,num*i);
  }
  return 0;
  }

