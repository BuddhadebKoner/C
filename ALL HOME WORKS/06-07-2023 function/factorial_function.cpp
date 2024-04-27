#include <stdio.h>
int factorial(int);
int main() {
	int f,fact;
	printf("Enter number\n");
	scanf("%d",&f);
	fact = factorial(f);
	printf("the factorial is %d \n",fact);
	return 0;
}
int factorial(int f) {
	int fact=1,i=1;
	for(i; i<=f; i++) {
		fact = fact*i;
	}
	return fact;
}
