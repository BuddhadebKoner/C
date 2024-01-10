#include<stdio.h>
int main(){
	int n;
	printf("Enter number that you want to make table :\n");
	scanf("%d",&n);
	
	for(int i=1;i<=10;i++){
		int tab;
		tab=n*i;
		printf("%d * %d = %d\n",n,i,tab);
	}
	return 0;
}
