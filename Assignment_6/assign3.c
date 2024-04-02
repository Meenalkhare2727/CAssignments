//To reverse the array elements

#include<stdio.h>
int main(){
float marks[5];
float *ptr=&marks[0];

printf("Array elements:");
for (int i=1;i<6;i++){
scanf("%f",&ptr[i]);
printf("Marks[%d]=%f",i,*ptr[i]);


}
for(int i=1;i<6;i++)
{ 

scanf("%d\n",&ptr[i]);
printf("Marks[%d]\n",ptr[i]);

printf("Array");
printf("\n");
}
return 0;
}
