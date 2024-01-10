#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1){
				printf("1 ");
			}
			else if(i==2){
				printf("2 ");
			}else if(i==3){
				printf("3 ");
			}else if(i==4){
				printf("4 ");
			}else if(i==5){
				printf("5 ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
