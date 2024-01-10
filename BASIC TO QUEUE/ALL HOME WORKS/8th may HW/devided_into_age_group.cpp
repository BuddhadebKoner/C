#include<stdio.h>
int main(){
	int age,b_count=0,s_count=0,a_count=0;
	for(int i=1;i<=15;i++){
		printf("Enter age \n");
		scanf("%d",&age);
		
		if(age<=5)
			b_count++;
		if(age>5&&age<=20)
		    s_count++;
		if(age>20)
		    a_count++;		
	}
	printf("baby is %d\nschool age is %d\nadult age is %d\n",b_count,s_count,a_count);
	
	return 0;
}
