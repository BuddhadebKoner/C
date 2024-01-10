#include<stdio.h>
int main(){
	
	int i,j,k,n,m;
	printf("Enter number \n");
	scanf("%d",&n);
	m=n;
	for(i=n;i>=1;i--){
		for(j=1;j<i;j++){
			printf("  ");
		}
		for(i=1;j<=m;j++){
			printf("* ");
		}
		printf("\n");
		m--;
	}
	
	return 0;
}
