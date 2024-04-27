#include<stdio.h>
int main(){
	int y;
	printf("Enter Number (1 to 12 )\n");
	scanf("%d",&y);
	
if(y>=1 && y<=12){
	
		switch(y){
		case(1):
			printf("january \n");
			break;
		case(2):
			printf("February \n");
			break;
		case(3):
			printf("March \n");
			break;
		case(4):
			printf("April \n");
			break;	
		case(5):
			printf("May \n");
			break;
		case(6):
			printf("June\n");
			break;
		case(7):
			printf("July \n");
			break;
		case(8):
			printf("August \n");
			break;	
		case(9):
			printf("September \n");
			break;	
		case(10):
			printf("october \n");
			break;	
		case(11):
			printf("Nuvember \n");
			break;	
		case(12):
			printf("December \n");
			break;	
		
		
	}
	
}
else{
	printf("Enter valid number :");
}
	
	
}
