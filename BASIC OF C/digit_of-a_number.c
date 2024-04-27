#include<stdio.h>
int main(){
	int x,rem,c;
	printf("Enter number \n");
	scanf("%d",&x);
	while(x>0){
		rem=x%10;
		x=x/10;
		c++;
	}
	printf("%d digits",c);
	
	return 0;
}
