// 	Write a C program to print all Strong numbers between 1 to n

#include <stdio.h>

int main()
{
    int i, j, c, l, e;
    long fact, sum;

    
    printf("Enter the number: ");
    scanf("%d", &e);
    
    for(i = 1; i <= e ; i++)
    {
        c = i;
        sum = 0;

        while (c > 0)
        {
            fact = 1;
            l = c % 10;

            
            for (j = 1; j <= l; j++)
                fact = fact * j;

            sum += fact; 

            c /= 10;
        }
        
          
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}