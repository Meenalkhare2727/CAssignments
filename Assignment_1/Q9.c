#include<stdio.h>
int main(){
  float cel = 0,fahren=0;

  printf("Enter the Temperature in fahrenheit  to convert it to Celsius:");
  scanf("%f",&fahren);
 
  cel = (5*(fahren-32)/9);
  printf("Entered temperature in celsius is : %f \n",cel);

  printf("Enter the Temperature in celsius to farenheigh:");
  scanf("%f",&cel);

  fahren = ((cel*9)/5)+32;
  printf("Entered temperature in fahrenheit is: %f \n",fahren);

return 0;
}
