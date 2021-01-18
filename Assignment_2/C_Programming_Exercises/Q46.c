// Write a C program to convert Decimal to Octal number system

#include <stdio.h>

int main()
{
    long long decimal, octal;
    int i, rem, place = 1;

    octal = 0;

    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);


    while(decimal > 0)
    {
        rem = decimal % 8;

        octal = (rem * place) + octal;

        decimal /= 8;

        place *= 10;
    }

    printf("octal number = %lld", octal);

}
