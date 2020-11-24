// Write a C program to calculate sum of digits of a number.

#include <stdio.h>
int main()
{
	int n, r, sum = 0;
	
	printf("Enter number: ");
	scanf("%d", &n);
	
	while(n)
	{
		r = n % 10;
		n = n / 10;
		sum += r;
	}
	printf("Sum of digits is %d \n", sum);
}