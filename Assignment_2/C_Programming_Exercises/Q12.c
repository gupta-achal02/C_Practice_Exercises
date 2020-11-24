// Write a C program to find sum of first and last digit of a number.

#include <stdio.h>

int main()
{
    int n, f, l;

    printf("Enter any number: ");
    scanf("%d", &n);

    l = n % 10;
    
    f = n;

    while(f >= 10)
        f = f / 10;

    printf("Sum of first and last digit is %d", f + l);

    return 0;
}