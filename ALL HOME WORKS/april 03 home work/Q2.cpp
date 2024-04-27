#include <stdio.h>

int main() { // Write a C program to show the use of ‘\n’, ‘\t’, ‘\b’, ‘\r’.

   printf("Buddhadeb\nKoner\n");  // \n for newline
   printf("This\tis\ta\ttab.\n");  // \t for tab
   
   printf("Remove\b\b\b\b\b\b\btext.\n");  // \b for backspace
   printf("This is a line\rThis should replace the previous text.\n");  // \r for carriage return
   return 0;
}

