#include<stdio.h>
int main(){
	char operator;
	float n1,n2,ans;
 printf("Enter operand n1 and n2\n");

scanf("%f %f",&n1 ,&n2);

printf("Enter operators");
scanf("%*c%c",&operator);

	switch(operator)

	{

		case'+': ans=n1+n2;
		         
				 printf("Addition : %.2f",ans);
				 break;

		case'-': ans=n1-n2;
				 printf("Substraction : %.2f",ans);
				 break;

		case'*': ans=n1*n2;
				 printf("Multiplication : %.2f",ans);
				 break;


		case'/': if(n2!=0){

				 ans=n1/n2;

				 printf("Division : %.2f",ans);

				 }
				 else 
				 printf("Cant divide by zero!");
				 break;

				 
	}

	return 0;
	}
