#include<stdio.h>
int main()
{
	int num1,num2,add,sub,multi,div;
	printf("Enter\n");
	scanf("%d%d",&num1,&num2);
	
	add=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	div=num1/num2;
	
	printf("Addition =%d\nSubstraction=%d\n",add,sub);
	printf("Multipication=%d\ndivition=%d\n",multi,div);
	return 0;
}
