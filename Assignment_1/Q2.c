// WAP to print number in char decimal octal and hex format
#include<stdio.h>
int main(){
   int num;
   

   printf("Enter a number:");
   scanf("%d",&num);
   printf("character in number is = %c\n",num);
   printf("Octal value of a is %o\n",num);

   printf("unsigned  value of a is %x\n",num);
   printf("hex value of a is %X\n",num);

   return 0;
   }
