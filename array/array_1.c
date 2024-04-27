#include<stdio.h>
int main(){
	int a[8];
	printf("Enter 8 number \n");
	for(int i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	printf("odd numbers are \n");
	for(int i=0;i<8;i++){
		if(a[i]%2 != 0){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
