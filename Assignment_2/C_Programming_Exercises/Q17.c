// Write a C program to check whether a number is palindrome or not.

#include <stdio.h>
#include <math.h>

int main()
{
	int n, r, digits, rev=0, num;
	
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	num = n;
	digits = log10(n);
	
	while(n)
	{
		r = n % 10;
		n = n / 10;
		rev +=  r * pow(10, digits); 
		digits--;		   
					  
	}
	
	if (rev == num)
		printf("It is a palindrome\n");
	else
		printf("Not a palindrome");
			
}