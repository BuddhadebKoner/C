#include<stdio.h>
int main(){
	int side1,side2,side3;

	printf("Enter 1st side of triangle :\n");
	scanf("%d",&side1);
	printf("Enter 2st side of triangle :\n");
	scanf("%d",&side2);
	printf("Enter 3st side of triangle :\n");
	scanf("%d",&side3);
	
	if((side1+side2>side3)&&(side2+side3>side1)&&(side1+side3>side2)){
		printf("triangle is possible to draw\n");
	}else{
		printf("Triangle is not possible to draw");
	}
	
	
	return 0;
}
