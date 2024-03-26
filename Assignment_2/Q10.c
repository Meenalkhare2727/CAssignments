//simple calculator
#include<stdio.h>
int main(){
	float n1,n2,ans;
	char operand;
//n1 = 20 ,n2 =10 ,operand = '+';
begin :
      printf("Enter first number:");
      scanf("%d",&n1);
	  printf("Enter second number:");
	  scanf("%d",&n2);

	switch(operand) 
	{

		case '+': ans= n1+n2;
				  printf("Addition: %f",ans);
				  scanf("%f%f",&n1,&n2);
				  break;

		case '-': ans= n1-n2;
				  printf("Substraction: %f",ans);
				  scanf("%f%f",&n1,&n2);

				  break;


		case '*': ans= n1*n2;
				  printf("Substraction:  %f",ans);
				  scanf("%f%f",&n1,&n2);

				  break;


		case '/':

				  if(n2!=0){
					  ans= n1/n2;
					  printf("ans:%.2f",ans);
				  }
				  else{
					  printf("Cannot add denominator zero!");
					  break;
				  }
				  char ch;
				  printf("You want to continue?");
				  scanf("%*c%c",&ch);
				  if (ch=='y'|| ch =='Y' && ch =='n' || ch =='N'){

					  printf("Thank you!");}
				  goto begin;

				 

	}
	return 0;
}

