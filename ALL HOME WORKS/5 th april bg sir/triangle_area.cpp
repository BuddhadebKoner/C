#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s,area;
	
	printf("enter the value of a :\n");
	scanf("%d",&a);
	
	printf("enter the value of b :\n");
	scanf("%d",&b);
	
	printf("enter the value of c :\n");
	scanf("%d",&c);
	
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("area is %d",area);
	return 0;
}
