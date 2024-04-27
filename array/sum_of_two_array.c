#include<stdio.h>
int main(){
	int A[3][4],B[3][4];
	printf("Enter A matrix value \n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter B matrix value \n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
			scanf("%d",&B[i][j]);
		}
	}
	printf("the A matrix\n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("the B matrix\n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){ 
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	printf("sum of A and B\n");
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
			printf("%d ",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
