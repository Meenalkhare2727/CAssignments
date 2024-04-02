#include<stdio.h>
int main(){
 unsigned char n1 =5,res;
 printf("n1= %x\n",n1);

 res =  n1 >> 2;
 printf("n1=%x\n",res);

 res = n1 << 2;
 printf("n1=%x\n",res);


return 0;
}
