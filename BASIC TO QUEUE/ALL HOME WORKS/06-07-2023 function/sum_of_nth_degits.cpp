#include<stdio.h>
int main(){
	int sumOfDigits(int);
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	int sum = sumOfDigits(n);
	printf("sum of 1 to %dth number is => %d ",n,sum);
	return 0;
}

int sumOfDigits(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum = sum+ i;  
	}
	return sum;
}
