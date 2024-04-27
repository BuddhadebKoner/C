#include<stdio.h>
int main()
{
	int a=26; // decimal
	int b=026; // octal  (o)
	int c=0x26; // hexadesimal (ox)
		
	printf("a=%d, b=%d and c=%d",a,b,c);
	printf("\na=%o, b=%o and c=%o",a,b,c);
	printf("\na=%x, b=%x and c=%x",a,b,c);
	return 0;
	
}
