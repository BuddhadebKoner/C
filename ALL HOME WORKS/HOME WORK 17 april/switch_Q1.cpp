#include<stdio.h>
int main(){
	int n;
	printf("Enter number (1 to 7)\n");
	scanf("%d",&n);
	
	if(1<=n && n<=7){
		switch(n){
		case (1):
			printf("monday \n");
			break;
		
		case(2):
			printf("tuesday \n");
			break;
		
		case(3):
			printf("Wednesday \n");
			break;
		
		case(4):
			printf("Thursday \n");
			break;
	
		case(5):
			printf("friday \n");
			break;
		
		case(6):
			printf("saturday \n");
			break;
		
		case(7):
			printf("sunday \n");
			break;
		}
	}
	else{
		printf("Enter Valid Number \n");
	}
	
	return 0;
	

}
