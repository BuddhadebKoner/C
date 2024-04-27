#include<stdio.h>
int main(){
	int n; //use of if else
	printf("Enter any number :\n");
	scanf("%d",&n);
	
	if(n>0){
		printf("%d is positive number \n",n);
	}
	else if(n==0){
		printf("%d the number is 0\n",n);
	}
	else{
		printf("%d is negative number \n",n);
	}
	return 0;
}
