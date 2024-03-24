#include<stdio.h>
#include<math.h>
int main(){

int area, peri,side1,side2,side3;

printf("Enter three sides of triangle :");
scanf("%d%d%d",&side1,&side2,&side3);

int s= (side1+side2+side3)/2;                   // semi parameter
area =sqrt(s*(s-side1)*(s-side2)*(s-side3));
printf("Area of triange is %d\n",area);

peri = side1+side2+side3;
printf("Perimeter of triangle is %d\n",peri);
return 0;
}
