#include<stdio.h>
#include<math.h>
int main(){
	int number,originalNumber,remainder,n=0,result=0;
	printf("Enter number \n");
	scanf("%d",&number);
	
	originalNumber=number;
	while(originalNumber!=0){
		originalNumber=originalNumber/10;
		n++;
	}
	printf("this is a %d digits number\n",n);
	originalNumber=number;
	
	 while(originalNumber!=0){
	 	remainder=originalNumber%10;
	 	result= result+pow(remainder,n);
	 	originalNumber=originalNumber/10;
	}
	if(result==number){
		printf("the number is an amstrong number\n");
	}else{
		printf("the number is not an amstrong number \n");
	}
	 
	 
	return 0;
}
