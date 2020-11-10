// Write a C program to find first and last digit of a number

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

    printf("First digit = %d\n", f);

    
    printf("Last digit = %d\n", l);

    return 0;
}