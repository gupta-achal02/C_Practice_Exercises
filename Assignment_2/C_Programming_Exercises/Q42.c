// Write a C program to convert Octal to Binary number system

#include <stdio.h>

int main()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long octal, binary = 0, place = 1;
    int rem;

    printf("Enter any Octal number: ");
    scanf("%lld", &octal);
    
    while(octal > 0)
    {
        rem = octal % 10;

        binary = (OCTALVALUES[rem] * place) + binary;

        octal /= 10;
        
        place *= 1000;
    }

    printf("Binary number = %lld", binary);

}
