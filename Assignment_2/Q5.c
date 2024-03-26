// Q5. WAP to accept number to check numeric palindrome
#include<stdio.h>
int main(){
     int num,temp,reverse=0,add;
	 printf("Enter a 5 digit number:");
	 scanf("%d",&num);
	 temp = num;               // stored user entered value in temp 12321 

	 while(num>0){
         add = num%10;  // 12321 remainder 1
		 reverse =(reverse*10)+add; //  
		                                    
		 num =num/10;  // 12321/10   gives quot 1232  num=1232

	 }
	 if(temp==reverse){
        printf("Entered number is palindrome",num);

	 }
     else{
          printf("Entered number is not palindrome",num);
	 }






return 0;
}







