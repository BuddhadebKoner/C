// find number of space,words,vowels
#include<stdio.h>
int main(){
	char str[100];
	int i=0,vou=0,word=0;
	
	puts("Enter string");
	gets(str);
	while(str[i]!=NULL){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			vou++;
		}
		if(str[i]==' '){
			word++;
		}
	}
	printf("words -- %d\n",word+1);
	printf("vouble -- %d\n",vou);
	return 0;
}
