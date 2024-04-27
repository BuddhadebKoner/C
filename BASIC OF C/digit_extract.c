#include<stdio.h>
int main(){
	int x,rem;
	printf("Enter number \n");
	scanf("%d",&x);
	printf("digits are\t");
	while(x>0){
		rem=x%10;
		x=x/10;
		printf("%d\t",rem);
	}
	
	return 0;
}
