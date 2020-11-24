// Write a C program to find frequency of each digit in a given integer.

#include <stdio.h>
#include <math.h>

int main()
{
	int n, r, digits, rev=0;
	int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0, d0 = 0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	digits = log10(n);
	printf("digits = %d\n", digits+1);
	
	while(n)
	{
		r = n % 10;
		n = n / 10;
		rev +=  r * pow(10, digits);
		digits--;		    
		
		switch(r)
		{
		 	case 1:
			    d1++;
				break;
			case 2:
			    d2++;
				break;
			case 3:
				d3++;
				break;
			case 4:
				d4++;
				break;
			case 5:
				d5++;
				break;
			case 6:
				d6++;
				break;
			case 7:
				d7++;
				break;
			case 8:
				d8++;
				break;
			case 9:
				d9++;
				break;
			default:
			    d0++;
		}
	}

		printf(" 1 = %d \n 2 = %d \n 3 = %d \n 4 = %d \n 5 = %d \n 6 = %d \n 7 = %d \n 8 = %d \n 9 = %d \n 0 = %d \n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d0);
}