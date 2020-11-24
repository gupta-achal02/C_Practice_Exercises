// Write a C program to enter a number and print its reverse.

#include <stdio.h>
#include <math.h>

int main()
{
	int n, r, digits, rev=0;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	digits = log10(n);
	
	while(n)
	{
		r = n % 10;
		n = n / 10;
		rev +=  r * pow(10, digits); 
		digits--;		   
					  
	}
	printf("Reverse of digit is %d \n", rev);
}