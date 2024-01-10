#include<stdio.h>
int main()
{
	 //Write a C program to find average of 3 numbers taking input from user.
	 int num1,num2,num3,avg;
	 
	 printf("Enter 1st number:\n");
	 scanf("%d",&num1);
	 
	 printf("Enetr 2nd number: \n");
	 scanf("%d",&num2);
	 
	 printf("Enter 3rd number: \n");
	 scanf("%d",&num3);
	 
	 avg=(num1+num2+num3)/3;
	 
	 printf("Avarage of three number is : %d",avg);
	 
	 return 0;
	 
	 
}
