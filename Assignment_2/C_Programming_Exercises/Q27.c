// Write a C program to print all Prime numbers between 1 to n

#include <stdio.h>

int main()
{
    int n, m;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
       m = 0;
       for (int j = 1; j <= i; j++)
       {
           if (i % j == 0)
            m++;
        
       }
       if (m == 2)
        printf(" %d \n", i);

    }
   
}