// Write a C program to find sum of all even numbers between 1 to n

#include <stdio.h>

int main()
{
   unsigned int n, s = 0;
   printf("Enter the upper limit of the range: ");
   scanf("%u", &n);
   
   for (unsigned int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += i;
        }
        
    }
    
    printf("%u", s);
    return 0;
}