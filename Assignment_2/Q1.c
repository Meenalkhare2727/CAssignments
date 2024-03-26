//WAP check for divide by zero error
#include<stdio.h>
int main(){
  int numerator,denominator;
  printf("Enter a numerator: ");
  scanf("%d",&numerator);
  printf("Enter a denominator:");
  scanf("%d",&denominator);
   
   if (denominator<=0){

    printf("Denominator cannot be zero!");
}
	 else {

       printf("Division of %d by %d is:%d\n",numerator,denominator, numerator/denominator);

	 }
	 return 0;
	 }

