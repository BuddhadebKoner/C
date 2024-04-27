#include<stdio.h>
//Write a C program to count the number of characters
// in a given string (excluding the null terminator).

int main(){
	char str[100];
	printf("Enter string\n");
	gets(str);
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
	printf("the length of this string is - %d\n",i);
	return 0;
}
