//C program to find diameter, circumference and area of circle using function

#include <stdio.h>

const float pi = 3.14;
float diameter(float r);
float circumference(float r);
float area(float r);


int main() 
{
    float r;
    
    
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    
            
    
    printf("Diameter = %.2f units\n", diameter(r));
    printf("Circumference = %.2f units\n", circumference(r));
    printf("Area = %.2f sq. units\n", area(r));
    
    return 0;
}


float diameter(float r) 
{
    return (2 * r);
}


float circumference(float r) 
{
    return (2 * pi * r); 
}


float area(float r)
{
    return (pi * r * r); 
}