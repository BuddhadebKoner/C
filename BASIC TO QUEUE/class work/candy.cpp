#include<stdio.h>

int main(){
	int candy,machin = 20;
	printf("how many candy you want !");
	scanf("%d",&candy);
	
	if(machin>=candy){
		for(int i=1;i<=candy;i++){
			printf("candy %d\n",i);
		}
		printf("thanku for coming");
	}
	
	else{
		for(int j=1;j<=machin;j++){
			printf("candy %d\n",j);
		}
		printf("sorry ! no more candy abalible");
	}
	
	return 0;
}
