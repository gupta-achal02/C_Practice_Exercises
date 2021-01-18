//C program to find maximum and minimum using functions

#include <stdio.h>

int max(int n1, int n2);
int min(int n1, int n2);


int main() 
{
    int n1, n2;
    
    printf("Enter any two numbers: ");
    scanf("%d%d", &n1, &n2);
    
    printf("\nMaximum = %d\n", max(n1, n2));
    printf("Minimum = %d", min(n1, n2));
    
    return 0;
}


int max(int n1, int n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
    
}


int min(int n1, int n2) 
{
    if (n1 > n2)
        return n2;
    else
        return n1;
}