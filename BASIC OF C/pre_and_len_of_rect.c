#include<stdio.h>
int main()
{
	int len,bre,per,area;
	
	printf("Enter length and breadth\n");
	
	scanf("%d%d",&len,&bre);
	per=(len+bre)*2;
	area=(len*bre);
	printf("perimeter is %d area is %d",per,area);
	
	return 0;
}
