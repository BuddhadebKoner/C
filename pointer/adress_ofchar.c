#include<stdio.h>
int main(){
	char ch='p';
	char *x;
	x=&ch;
	printf("ch = %c\n",ch);
	printf("&ch = %u\n",&ch);
	printf("x = %u\n",x);
	printf("&x = %u\n",&x);
	printf("*x = %c",*x);
	return 0;
}
