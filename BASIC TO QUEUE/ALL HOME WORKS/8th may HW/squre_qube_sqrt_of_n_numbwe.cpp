#include<stdio.h>
#include<math.h>
int main(){
	int n,i,squre,cube;
	float suqrt;
	printf("Enter positive iumber \n");
	scanf("%d",&n);
	
	printf("------------------------------\n");
	printf("number\tsqure\tcube\tsqure root\t\n");
	
	for(i=1;i<=n;i++){
		squre=i*i;
		cube=i*i*i;
		suqrt=sqrt(i);
		
		printf("%d\t%d\t%d\t%0.2f \n",i,squre,cube,suqrt);
	}
	
	return 0;
}
