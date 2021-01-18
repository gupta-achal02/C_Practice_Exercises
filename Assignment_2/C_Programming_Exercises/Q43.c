// Write a C program to convert Octal to Decimal number system

#include <stdio.h>
#include <math.h>

int main()
{
    long octal, decimal = 0;
    int N = 0;
    const int BASE = 8;

    printf("Enter any octal number: ");
    scanf("%ld", &octal);


    while(octal != 0)
    {
        decimal += pow(BASE, N) * (octal % 10);

        N++;
        octal /= 10;
    }

    printf("decimal number = %ld", decimal);
    
}