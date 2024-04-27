// write a program to find sum of N natural number using for loop

#include<stdio.h>
int main(){
	
	int n,sum=0,i;
	printf("Enter number \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("sum is %d\n",sum);
	return 0;
}
