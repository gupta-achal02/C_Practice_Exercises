// Write a C program to find all prime factors of a number

#include <stdio.h>

int main()
{
    int n, m;
    
    printf("Enter the number: ");
    scanf("%d", &n);
   
    for (int i = 1; i <= n; i++)
    {
        m = 0;
        for (int j = 1; j <= i; j++)
        {
            if(i %j == 0)
                m++;
        
        }
        
        if (m==2)
        {
            while(n%i == 0)
            {
               n = n/i;
               printf(" %d \n", i);
               
            }
        }
    }
}