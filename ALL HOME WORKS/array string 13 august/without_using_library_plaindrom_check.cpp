//Create a C program that checks if a given string is a palindrome
// using string librery.

#include <stdio.h>

int main() {
    char str1[100];
    gets(str1);

    char str2[100];
    
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    puts(str2);
    
    
    
}


//    strrev(str2); 
//
//    if (strcmp(str1, str2) == 0) {
//        printf("%s is a palindrome.\n", str1);
//    } else {
//        printf("%s is not a palindrome.\n", str1);
//    }


