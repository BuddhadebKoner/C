#include<stdio.h>
int main(){
	int basic_sallary,da,hra;
	printf("Enter basic sallary :\n");
	scanf("%d",&basic_sallary);
	
	if(basic_sallary<=15000){
		da=12000;
		hra=0.12*basic_sallary;
	}
	else{
		da=0.15*basic_sallary;
		hra=0.29*basic_sallary;
	}
	int gross;
	gross=basic_sallary+da+hra;
	printf("gross sallary is %d",gross);
	
	return 0;
}
