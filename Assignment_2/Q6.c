// Q7 WAP for leap year
#include<stdio.h>
int main(){
    int year;
	printf("Enter year :");
	scanf("%d",&year);

/*	if(year%4==0){
	 printf("Entered year is a leap year");
	}
        else if (year%400==0){
        printf("Entered number is also a leap year");
		}
		else if(year%100 !=0){
		printf("Entered number is not a leap year");
		}
      return 0;
}*/

// using logical operator
/*  if (year%400==0 && year%100!=0 || year%4==0){

           printf("Entered year is a leap year");
  } else
        printf("Entered number is not leap year");

		return 0;

}*/
//using Conditional operator
if (year%400==0 ? year%4==0 : year%100!=0)
 
           printf("Entered year is a leap year");
		   else
		   printf("Enter year is not leap year");
		   return 0;
		   }
