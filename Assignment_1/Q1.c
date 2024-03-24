#include<stdio.h>
int main(){
    int a,b,add,sub,mul,div;

	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	printf("\n");

	add =a+b;
	sub =a-b;
	mul =a*b;
	div =a/b;
	printf("Addition of two numbers is:  %d\n",add);
	printf("Substraction of two numbers: %d\n",sub);
	printf("Multiplication of two numbers: %d\n",mul);
	printf("Division of two numbers :%d\n",div);

	return 0;
	}
