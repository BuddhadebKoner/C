#include<stdio.h>
int main(){
	int n;
	printf("Enter day number (1-7)\n");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			printf("monday \n");
			break;
		case 2:
			printf("tuesday \n");
			break;
		case 3:
			printf("wednesday \n");
			break;
		case 4:
			printf("thrusday \n");
			break;
		case 5:
			printf("friday \n");
			break;
		case 6:
			printf("saturday \n");
			break;
		case 7:
			printf("sunday \n");
			break;				
		default :
		printf("Wrong choice"); 			
		
		
		
	}
	
	
	return 0;
}
