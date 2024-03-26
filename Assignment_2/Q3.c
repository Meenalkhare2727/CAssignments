//WAP to check number is negative or positive and zero
#include<stdio.h>
int main(){

    int num;
	printf("Enter first number:");
	scanf("%d",&num);

	if (num>0){
       printf("positive number");

	}
	else if(num<0){
       printf("Negative number");
	   }
	   else{
	   printf("Number is zero!");
	}
}
