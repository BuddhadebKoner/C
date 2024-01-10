#include<stdio.h>
#define PI 3.14
double calculateArea(double);
int main(){
	double radius;
	printf("Enter the radius of circle => \n");
	scanf("%lf",&radius);
	double area = calculateArea(radius);
	printf("area of the circle is => %f0.2",area);
	
	return 0;
}
double calculateArea(double r){
	double area = PI * r * r;
	return area;
}
