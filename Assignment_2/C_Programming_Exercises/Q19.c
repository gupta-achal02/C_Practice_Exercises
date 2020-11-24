// Write a C program to enter a number and print it in words.

#include <stdio.h>
#include <math.h>

int main()
{
	int n, r, digits, rev, temp, t;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	digits = log10(n);
	temp = digits;
	
	for(int i = 0; i <= temp; i++)
	{	
		rev = pow(10, digits);
		r = n % rev;
		t = n / rev;
		n = r;
		digits--;
		
		switch(t)
		{
		 	case 1:
			    printf("one ");
				break;
			case 2:
			    printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			default:
			    printf("zero ");
			    break;
		}
		
	}
}