// Write a C program to print all ASCII character with their values.

#include <stdio.h>

int main ()
{
	int i = 0;
    char ch;
 
    for (i = 0; i < 256; i++) 
    {
        printf("%d = %c\n", i, ch);
        ch = ch + 1;
    }
}