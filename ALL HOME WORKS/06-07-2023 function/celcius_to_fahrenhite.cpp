#include<stdio.h>
#define Cel 1.8
int main(){
	double celsiusToFahrenheit(double);
	double c;
	printf("convert celcius to Fahrenheit => \n");
	printf("Enter celcius degree => \n");
	scanf("%lf",&c);
	double f = celsiusToFahrenheit(c);
	printf("%0.2f degree Celcius = %0.2f degree fahrenhite\n",c,f);
	return 0;
}
double celsiusToFahrenheit(double c){
	 double f = (c * Cel)+ 32;
	return f;
}


