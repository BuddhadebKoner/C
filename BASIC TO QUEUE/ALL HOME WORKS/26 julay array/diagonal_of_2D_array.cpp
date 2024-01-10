#include<stdio.h>
int main(){
	printf("diagonal matrix of 2D array");
	int arr[5][5];
	printf("Enter 25 number \n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		   scanf("%d",&arr[i][j]);
	    }
	}
	printf("\n\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i==j||i+j==4){
			printf("%d  ",arr[i][j]);	
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
