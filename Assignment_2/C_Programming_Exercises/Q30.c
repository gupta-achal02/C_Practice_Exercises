// Write a C program to check whether a number is Armstrong number or not

  
#include <stdio.h>

int main()
{
    int k, n, r, m = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    k = n;
    
    while (n)
    {
        r = n % 10;
        n = n / 10;
        m = r * r * r + m;
    }

    if (k == m)
        printf("%d is an Armstrong number \n", m);
    else
        printf("not an Armstrong number \n");
}