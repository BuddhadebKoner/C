#include<stdio.h>
int main(){
	float c,f;
	
	printf("Enter celsius :\n");
	scanf("%f",&c);
	
	f=((c*1.8)+32);
	
	printf("The farenhight temp is %f:\n",f);
	return 0;
}
