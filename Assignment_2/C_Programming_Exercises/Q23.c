// Write a C program to calculate factorial of a number

#include <stdio.h>

int main()
{
    long int j = 1;
    int n;
   
    printf("Enter the number: ");
    scanf("%ld", &n);
    
    for(int i = 1; i <= n; i++)
    {
        j = j * i;
               
    }
    printf("%d! = %ld\n", n, j);
}