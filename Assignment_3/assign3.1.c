#include<stdio.h>
int main(){
	char ch;
	int num;

	printf("Enter a character:");

	scanf("%c",&ch);

	printf("Character %c\n",ch);


	printf("Enter a num:");

	scanf("%d",&num);

	printf("Number:%d\n",num);

	while(num>0)
	{

		printf("%c",'*');

		num--; 
	}

	return 0;


}


