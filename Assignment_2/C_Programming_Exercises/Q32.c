// 	Write a C program to check whether a number is Perfect number or not

#include <stdio.h>

int main()
{
    int n, s = 0, t;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    t = n;
    
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            s += i;
        }
        
    } 
    if (s == t)
        printf("It is a perfect number \n");
        
    else   
        printf("It is not a perfect number \n");

}