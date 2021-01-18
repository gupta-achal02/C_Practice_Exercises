// Write a C program to convert Decimal to Binary number system

#include <stdio.h>

int main()
{
    long long decimal, binary;
    int i, rem, place = 1;

    binary = 0;

    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);


    while(decimal > 0)
    {
        rem = decimal % 2;

        binary = (rem * place) + binary;

        decimal /= 2;

        place *= 10;
    }

    printf("binary number = %lld", binary);

}
