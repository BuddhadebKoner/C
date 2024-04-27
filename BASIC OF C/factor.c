// find all the factors of given number 
// using for loop
#include<stdio.h>
int main(){
	int i,n,count=0;
	printf("Enter number :\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		if(n%i==0){
			printf("factors are :%d\n",i);
			count++;
		}	
	}
	printf("number of factors is :%d\n",count);
	if(count==2){
	printf("Prime number \n");
    }
    else{
    	printf("not a prime number \n");
	}
	return 0;
}
