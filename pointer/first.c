#include<stdio.h>
int main(){
	int a=43;
	int *b;
	b=&a;
	
	printf("a = %d",a); //12
	printf("\nadress of a is = %u\n",&a); //6487580
	printf("b = %u\n",b); //6487580
	printf("adress of b is = %u\n",&b); //6487568
	
	printf("%d",*b); //12
	
//	printf("b =  %d\n",b);
//	printf("adress of b is = %u",&b);
	
	
	
	return 0;
}
