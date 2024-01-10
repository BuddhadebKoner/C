#include<stdio.h>
int main(){
	int n;
	printf("Enter number \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%400==0||i%4==0&&i%100!=0){
			printf("leap yrar = %d\n",i);
		}
	}
	
	return 0;
}
