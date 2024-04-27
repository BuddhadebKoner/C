#include<stdio.h>
int main(){
	int age;
	char gender,marry;
	
	printf("driver is to be insured or not\n");
	
	printf("Are you married? Enter 'y' for Yes or 'n' for No: ");
    scanf(" %c", &marry);
	printf("Enter your gender ('m' for Male, 'f' for Female): ");
    scanf(" %c", &gender);
	printf("Enter your age: ");
    scanf("%d", &age);
    
    if(marry=='y'){
    	printf("the driver is to be insured :");
	}else if(marry=='n'){
		if(gender=='m'&&age>30){
			printf("the driver is to be insured :");
		}else if(gender=='f'&&age>25){
			printf("the driver is to be insured :");
			
		}else{
			printf("the driver is not insured :");
		}
	}else{
		printf("enter valid details");
	}
	
	return 0;
}
