// 	Write a C program to check whether a number is Strong number or not

#include <stdio.h>

int main()
{
    int i, n, num, l, sum;
    long fact;

    printf("Enter any number: ");
    scanf("%d", &num);

    n = num;

    sum = 0;

    while(num > 0)
    {
        l = num % 10;

        fact = 1;
        for (i = 1; i <= l; i++)
            fact = fact * i;

        sum = sum + fact;

        num = num / 10;
    }

    if (sum == n)
        printf("%d is a strong number", n);

    else
        printf("%d is not a strong number", n);

}