//C program to find cube of a number using function

#include <stdio.h>

int cube(int n);

int main()
{
    int n;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("%d^3 = %d", n, cube(n));

}

int cube(int n)
{
    int c = n * n * n;
    return c;
}