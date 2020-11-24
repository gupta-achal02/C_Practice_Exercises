// Write a C program to calculate product of digits of a number.

#include <stdio.h>

int main()
{
	int n, r, prod = 1; 
	
	printf("Enter number: ");
	scanf("%d", &n);
	
	while(n)
	{
		r = n % 10;
		n = n / 10;
		prod = prod * r;
	}
	printf("Product of digit is %u \n", prod);
}