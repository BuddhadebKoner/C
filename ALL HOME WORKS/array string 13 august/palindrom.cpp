//Create a C program that checks if a given string is a palindrome
// using string librery.


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    gets(str1);

    char str2[100];
    strcpy(str2, str1);

    strrev(str2); 

    if (strcmp(str1, str2) == 0) {
        printf("%s is a palindrome.\n", str1);
    } else {
        printf("%s is not a palindrome.\n", str1);
    }

    return 0;
}

