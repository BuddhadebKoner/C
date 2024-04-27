// write a program factorial of n number 
#include<stdio.h>
int main(){
	int n,i=1,fact=1;
	printf("Enter number \n");
	scanf("%d",&n);
	
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("factorial =%d\n",fact);
	return 0;
}
