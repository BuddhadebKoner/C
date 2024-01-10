//Implement a C program to reverse a given string.
#include<stdio.h>
int main(){
    char reverse[10];
    
    gets(reverse);
    int k;
    while(reverse[k]!='\0'){
		k++;
	}
	
    for(int i=k; i>=0; i--){
        printf("%c", reverse[i]);
    }
    
    return 0;
}

