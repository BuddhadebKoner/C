// using switch case create a basic calculate
#include<stdio.h>
int main(){
	int a,b,sum,sub,div,multi;
	char opt;
	printf("Enter 2 number :\n");
	scanf("%d%d",&a,&b);
	printf("enter your choice :\n");
	fflush(stdin);
	scanf("%c",&opt);
	
	switch(opt){
		case('+'):
			sum=a+b;
			printf("sum of numbers is :%d\n",sum);
			break;
		case('-'):
			sub=a-b;
			printf("subtraction of numbers is :%d\n",sub);
			break;
		case('*'):
			multi=a*b;
			printf("multiply is :%d\n",multi);
			break;
		case('/'):
			div=a/b;
			printf("divtion is :%d\n",div);
			break;
		default	: 
		printf("wrong choice");
	}
	
	
	return 0;
}
