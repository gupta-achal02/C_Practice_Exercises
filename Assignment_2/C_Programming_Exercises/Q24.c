//  Write a C program to find HCF (GCD) of two numbers

#include <stdio.h>

int main()
{
    int n, m;
    
    printf("Enter the 1st number: ");
    scanf("%d", &n);

    printf("Enter the 2nd number: ");
    scanf("%d", &m);
     
    while (n != m)
    {
        if(n > m)
            n -= m;
        else
            m -= n;
    }

    printf("HCF is %d \n", n);
}