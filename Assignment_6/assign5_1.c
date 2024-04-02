#include<stdio.h>
int main(){

	int marks[5];
	int size;
	printf("Size of array");
	scanf("%d",&size);

	printf("size of array is %d\n",size);

	printf("Enter marks of subject  : \n");
	for(int i = 1 ; i < 6 ; i++)
	{
		printf("Subject[%d] :",i);
		scanf("%d",&marks[i]);
	}

	printf("Marks of five subjects of one student: ");
	for(int i = 1 ; i < 6 ; i++)
	{
		printf("%-4d", marks[i]);

		for (int i=0;i<marks[i];i++)
		{ int sum=0;
			sum = sum +marks[i];
			printf("Sum of all marks =%d",sum);
		
		}
		return 0;

	}
}
