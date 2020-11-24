// Write a C program to check whether a number is Prime number or not

#include <stdio.h>
#include <math.h>

int main()
{
    int n, m = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
   
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            m = 1;
            break;
        }   
    }
    
    if (m == 1)
        printf("%d is a composite number \n", n);
    else
        printf("%d is a prime number \n", n);
}