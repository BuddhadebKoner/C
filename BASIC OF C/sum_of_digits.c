#include<stdio.h>
int main(){
	int x,rem,sum;
	printf("Enter number \n");
	scanf("%d",&x);
	
	while(x>0){
		rem=x%10;
		sum=sum+rem;
		x=x/10;
	}
	printf("sum of all digits is %d",sum);
	
	return 0;
}
