#include<stdio.h>
int main()
{
	int a=10;
	char ch='p';
	float f=3.24;
	double d=7.75;
	
	printf("integer needs %d bytes space \n",sizeof(a));
	printf("character needs %d bytes space \n",sizeof(ch));
	printf("float needs %d bytes space \n",sizeof('p'));
	printf("double needs %d bytes space \n",sizeof(a));
	
	return 0;
}

