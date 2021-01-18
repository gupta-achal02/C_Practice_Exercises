// C program to check palindrome number using recursion

#include <stdio.h>
#include <math.h>


int rever(int n);

int main()
{
    int n;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    if(rever(n) == n)
        printf("It is a palindrome\n");
    else
        printf("Not a palindrome\n");
    
}


int rever(int n)
{
    
    int digits = log10(n);
    int rem = n % 10;
    
    if(n == 0)
        return 0;

    return ((rem * pow(10, digits)) + rever(n/10));
}