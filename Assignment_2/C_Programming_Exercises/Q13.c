// Write a C program to swap first and last digits of a number.

#include<stdio.h>
#include<math.h>

int main()
{
    int n, f, l, t1, t2, temp, num;
    printf("Enter number: ");
    scanf("%d", &n);

    f = log10(n);

    l = n % 10;

    temp = pow (10, f);

    t1 = n / temp;

    t2 = (n % temp);
       
    num = l * temp + t2 + t1 - l;

    printf("The required number is = %d \n", num);
    
}