// Write a C program to find power of a number using for loop

#include<stdio.h>

int main()
{
    int base, power;
    long int num = 1;
    
    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the power: ");
    scanf("%d", &power);

    for(int i = 0; i < power; i++)
        num *= base;

    printf("%ld\n", num);
}