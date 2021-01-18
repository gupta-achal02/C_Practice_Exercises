//C program to check even or odd using functions

#include <stdio.h>

int even_or_odd(int n);

int main()
{
    int n;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    
    if(even_or_odd(n))
        printf("The number is even.");
    else
        printf("The number is odd.");
    
    return 0;
}

int even_or_odd(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}