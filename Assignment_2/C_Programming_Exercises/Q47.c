// Write a C program to convert Decimal to Hexadecimal number system

#include <stdio.h>
#include <string.h>

int main()
{
    char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    long long decimal;
    char hex[65];
    int index, rem;
    
    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);

    index = 0;
    
    while(decimal != 0)
    {
        rem = decimal % 16;

        hex[index] = HEXVALUE[rem];

        decimal /= 16;

        index++;
    }
    hex[index] = '\0';

    strrev(hex);

    printf("Hexadecimal number = %s", hex);

}