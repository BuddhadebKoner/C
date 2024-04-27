#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j==1){
				printf("A ");
			}
			else if(j==2){
				printf("B ");
			}else if(j==3){
				printf("C ");
			}else if(j==4){
				printf("D ");
			}else if(j==5){
				printf("E ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
