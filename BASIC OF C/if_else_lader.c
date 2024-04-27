#include<stdio.h>
int main(){
	int com,soft,data,obj,os,avg;
	
	printf("Enter your 5 numbers :\n");
	scanf("%d%d%d%d%d",&com,&soft,&data,&obj,&os);
	avg=(com+soft+data+obj+os)/5;
	printf("avarage marks is :\n",avg);
	if(avg>=90){
		printf("your gread is O");
	}else if(avg>=80){
		printf("your gread is E");
	}else if(avg>=70){
		printf("your gread is A");
	}else if(avg>=60){
		printf("your gread is B");
	}else if(avg>=50){
	    printf("your gread is C");
	}else if(avg>=40){
		printf("your gread is D");
	}else {
	printf("you are fail");
	}
	
	
	return 0;
}
