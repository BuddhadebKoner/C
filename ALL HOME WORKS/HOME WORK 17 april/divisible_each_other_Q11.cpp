#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter 1st number :\n");
	scanf("%d",&num1);
	
	printf("Enter 2nd number :\n");
	scanf("%d",&num2);
	
	if(num1%num2==0){
		printf("%d diviseble by %d :\n",num1,num2);
	}
	else{
		printf("%d not divisible by %d :\n",num1,num2);
	}
	return 0;
}
