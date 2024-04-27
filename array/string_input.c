// wap to take a string from user
// and print that string
#include<stdio.h>

int main()
{
	char str[100];
	printf("Enter any string\n");
	//scanf("%s",str);
	//scanf("%[^\n]s",str);
	gets(str);
	//printf("\n\nEntered string = %s",str);
	puts("\nEntered string= ");
	puts(str);
	
	return 0;
}
