//positive or negitive checker 
#include<stdio.h>
int main(){
	int n;
	printf("Enter number \n");
	scanf("%d",&n);
	
	if(n<=0){
		printf("%d is negitive\n",n);
	}
	else if(n>=0){
		printf("%d is positive \n",n);
	}
	else{
		printf("Enter valid number \n",n);
	}
	return 0;
}
