// Write a C program to print all odd numbers between 1 to 100.

#include <stdio.h>

int main()
{
   
   for (unsigned int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            printf("%u\n", i);
        }
        
    }
    
    return 0;
}