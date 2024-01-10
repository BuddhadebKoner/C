#include<stdio.h>
int main(){
	
	int result,num1,num2;
	char opt;
	
	printf("Enter your operator (+,-,*,/) \n");
	scanf("%c",&opt);
	
	printf("Enter two number :\n");
	scanf("%d\n%d",&num1,&num2);	
	
	
	if(opt=='+'||opt=='-'||opt=='*'||opt=='/'){
			switch(opt){
		case'+':
	    result=num1+num2;
		printf("%d + %d = %d",num1,num2,result);
		break;
		case'-':
			if(num1<num2){
				result=num2-num1;
				printf("%d - %d =%d\n",num2,num1,result);
			}
			else{
				printf("%d - %d =%d\n",num1,num2,result);
			}
			break;
		case'*':
			result=num1*num2;
			printf("%d * %d = %d",num1,num2,result);
			break;
		case'/':
		if(num1<num2){
			result=num2/num1;
			printf("%d / %d = %d ",num2,num1,result);
		}
		else{
			result=num1/num2;
			printf("%d / %d = %d", num1,num2,result);
		}	
	}
	}
	else{
		printf("Enter valid character \n");
	}
	
	
	return 0;
}
