// Write a C program to find LCM of two numbers

#include <stdio.h>

int main()
{
    int n, m, temp1, temp2;
    
    printf("Enter the 1st number: ");
    scanf("%d", &n);

    printf("Enter the 2nd number: ");
    scanf("%d", &m);
    
    temp1 = n;
    temp2 = m;

    while (n != m)
    {
        if(n > m)
            n -= m;
        else
            m -= n;
        
    }

    printf("LCM is %d \n", (temp1 * temp2) / n);
}