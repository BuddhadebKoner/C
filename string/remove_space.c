// wap to remove spaces from a given string

#include<stdio.h>

int main()
{
	char str1[100],str2[100];
	int i=0,j=0;
	puts("Enter any string");
	gets(str1);
	
	while(str1[i]!=NULL)
	{
		if(str1[i]==' ')
		{
			i++;
		}
		str2[j]=str1[i];
		i++;
		j++;
	}
	str2[j]=NULL;
	printf("new string= %s",str2);
	
	return 0;
}
