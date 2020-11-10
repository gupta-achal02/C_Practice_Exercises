// Write a C program to print all natural numbers from 1 to n.

#include <stdio.h>

int main()
{
    unsigned int n;

    printf("Enter any number: ");
    scanf("%u", &n);

    for (unsigned int i = 1; i <= n; i++)
        printf("%u\n", i);

    return 0;
}