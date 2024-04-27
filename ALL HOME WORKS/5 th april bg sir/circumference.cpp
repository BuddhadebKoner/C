#include<stdio.h>
#define PI 3.14
int main(){
	float r,cir,area;
	
	printf("Enter the radius\n");
	scanf("%f",&r);
	
	cir=2*PI*r;
	area=PI*r*r;
	printf("circumference is %0.2f\n",cir);
	printf("area is %0.2f\n",area);
	return 0;
	
}
