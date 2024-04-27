// using switch case create a basic calculate
#include<stdio.h>
int main(){
	int a,b,sum,sub,div,multi,opt;
	
	printf("Enter 2 number :\n");
	scanf("%d%d",&a,&b);
	printf("enter your choice (1,2,3,4):\n");
	scanf("%d",&opt);
	
	switch(opt){
		case(1):
			sum=a+b;
			printf("sum of numbers is :%d\n",sum);
			break;
		case(2):
			sub=a-b;
			printf("subtraction of numbers is :%d\n",sub);
			break;
		case(3):
			multi=a*b;
			printf("multiply is :%d\n",multi);
			break;
		case(4):
			div=a/b;
			printf("divtion is :%d\n",div);
			break;
		default	: 
		printf("wrong choice");
	}
	
	
	return 0;
}
