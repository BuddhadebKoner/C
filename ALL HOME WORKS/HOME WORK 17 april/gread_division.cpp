#include<stdio.h>
int main(){
	int b,m,e,g,p,avg;
	printf("Enter your bengali number out of 100\n");
	scanf("%d",&b);
	
	printf("Enter your math number out of 100\n");
	scanf("%d",&m);
	
	printf("Enter your English number out of 100\n");
	scanf("%d",&e);
	
	printf("Enter your geography number out of 100\n");
	scanf("%d",&g);
	
	printf("Enter your programing number out of 100\n");
	scanf("%d",&p);
	
	avg=((b+m+e+g+p)/5);
	if(avg<=100&&avg>=90){
		printf("your gread is 'A'");
		
	}
	else if(avg<=90&&avg>=80){
		printf("your gread is 'B'");
	}
	else if(avg<=80&&avg>=70){
		printf("your gread is 'C'");
	}
	else if(avg<=70&&avg>=50){
		printf("your gread is 'D'");
	}
	else if(avg<=40){
		printf("you are fail");
	}
	return 0;
}
