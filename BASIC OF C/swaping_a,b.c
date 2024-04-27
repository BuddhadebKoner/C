#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two value\n");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping value of a=%d and b=%d",a,b);
	return 0;
	
	
}
