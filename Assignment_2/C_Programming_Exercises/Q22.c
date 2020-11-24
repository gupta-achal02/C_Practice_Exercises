// Write a C program to find all factors of a number

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n/2 + 1; i++)
    {
        if (n%i == 0)
        {
            printf("%d \t", i);
        }
    }
}