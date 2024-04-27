#include<stdio.h>
int main(){
	int n;
	printf("Enter a number ");
	scanf("%d",&n);
	
	if(n>0){
		if(n%2==0){
			printf("this is positive even number :\n");
		}

		else{
			printf("this is positive odd");
		}
		
	}
	else if(n%2!=0){
		printf("the number is odd and negitive");
	}
}
