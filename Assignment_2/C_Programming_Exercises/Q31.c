// Write a C program to print all Armstrong numbers between 1 to n

  
#include <stdio.h>

int main()
{
    int i, n, temp, rem, sum;
 
    printf("Enter the number: ");
    scanf("%d", &n);
 
    for(i = 1; i<=n; i++)
    {
        temp = i;
 
        sum=0;
        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp /= 10;
        }  
    
        if(sum == i)
            printf("%d\n",i);
    }
     
}
  
    
