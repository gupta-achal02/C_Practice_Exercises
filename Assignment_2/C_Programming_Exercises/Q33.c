// 	Write a C program to print all Perfect numbers between 1 to n

#include <stdio.h>

int main()
{
    int n, s = 0, t;
    
    printf("Enter the number: ");
    scanf("%d", &t);
    
    for(n = 1; n < t; n++)
    {
     for(int i = 1; i <= n / 2; i++)
       {
         if(n % i == 0)
         {
            s += i;
         }
       }
       
       if (s == n)
         printf("%d \n", n);     
       s = 0; 
    }
    
}