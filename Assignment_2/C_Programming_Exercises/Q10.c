// Write a C program to count number of digits in a number

#include <stdio.h>

int main()
{
    int n, c = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
 
    for (n; n != 0; c++) 
        n /= 10;     
    
    printf("Number of digits: %d", c);
   
   return 0;
}
