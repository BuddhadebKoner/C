#include<stdio.h>
int main(){
	int A[2][3],B[3][2];
	int C[2][2] = {{0,0},{0,0}};
	// input of a array 
	printf("Enter A array that is 2*3 matrix \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	//input of B array
	printf("Enter B array that is 3*2 matrix \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&B[i][j]);
		}
	}
	
	printf("A array array --- \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("A array array --- \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	
	printf("multipication of A and B array \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<3;k++){
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
	printf("multipication of A and B array \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
