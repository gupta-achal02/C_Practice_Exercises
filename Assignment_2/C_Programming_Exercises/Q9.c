// Write a C program to print multiplication table of any number

#include <stdio.h>

int main()
{
   int n, m, i = 1;
   
   printf("Enter the number to be multiplied: ");
   scanf("%d", &n);
   
   printf("Enter the number upto which the first number should be multiplied: ");
   scanf("%d", &m);
   
   while (i <= m)
   {
       printf("%d * %d = %d\n", n, i, n*i);
       i++;
   }
   
   
   return 0;
}
