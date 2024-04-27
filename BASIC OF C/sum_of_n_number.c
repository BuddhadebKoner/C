//write a program to write sum of n natural number 
#include<stdio.h>
int main(){
	int n,i=1,sum=0;
	printf("Enter number \n");
	scanf("%d",&n);
	
	while(i<=n){
		sum+=i;
//		printf("%d",sum); 
		i++;
	}
	printf("sum of %d number =%d",n,sum);
	return 0;
}
