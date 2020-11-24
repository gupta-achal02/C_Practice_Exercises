// Write a C program to print all natural numbers in reverse (from n to 1).

#include <stdio.h>

int main()
{
    unsigned int n;

    printf("Enter any number: ");
    scanf("%u", &n);

    for (unsigned int i = n; i >= 1; i--)
        printf("%u\n", i);

    return 0;
}