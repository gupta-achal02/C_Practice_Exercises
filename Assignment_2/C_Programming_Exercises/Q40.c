// Write a C program to convert Binary to Decimal number system

#include <stdio.h>
#include <math.h>

int main()
{
    long binary, decimal = 0;
    int N = 0;
    const int BASE = 2;

    printf("Enter any binary number: ");
    scanf("%ld", &binary);


    while(binary != 0)
    {
        if(binary % 10 == 1)
           decimal += pow(BASE, N);

        N++;
        binary /= 10;
    }

    printf("decimal number = %ld", decimal);
    
}