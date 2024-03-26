#include<stdio.h>
int main(){
int p=1;
int base, index;
 printf("Enter base:");
 scanf("%d",&base);

 printf("Enter index:");
 scanf("%d",&index);



 printf("%d ^%d = %d",base,index,p);

 for(int i=1;i<index;i++){
 
 p=base*base*base;


}
return 0;

}
