#include<stdio.h>
int main()
{
	//Write a C program to add two numbers taking input from users.
	int num1,num2,add;
	
	printf("enter the value of 1st number \n");
	scanf("%d",&num1);
	
	printf("Enter the value of 2nd number\n");
	scanf("%d",&num2);
	add=num1+num2;
	
	printf("sum of two number is %d",add);
	
	return 0;
	
}
