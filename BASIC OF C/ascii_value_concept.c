// program to check whether a given character
// is alphabet or not
// and if it is an alphabet, also show whether 
// it is a vowel or consonant

#include<stdio.h>

int main()
{

char ch;

printf("Enter any character\n");
scanf("%c",&ch);

if((ch>=65 && ch<=90) || (ch>=97 && ch<=120))
{
printf("\nThe given character is an alphabet");
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf(" and it is a vowel\n");
	}
	else
	{
		printf(" and it is a consonant\n");
	}
}
else
{
printf("\nThe given character is not an alphabet");
}


return 0;
}
