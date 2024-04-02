#include<stdio.h>
int main(){

int n1=10;
int n2=20;

printf("Before swap n1 =%d n2=%d\n",n1,n2);


swap(&n1, &n2);

printf("After swap n1=%d n2=%d\n",n1,n2);


return 0;
}
void swap(int *pn1 , int *pn2 )
{
*pn1 = *pn1 ^ *pn2;
*pn2 = *pn1 ^ *pn2;
*pn1 = *pn1 ^ *pn2;


}



