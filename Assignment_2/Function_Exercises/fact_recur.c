#include <stdio.h>  

int fact (int);  

int main()  
{  
    int n,f;  
    printf("Enter the number: ");  
    scanf("%d",&n);  
    
    f = fact(n);  
    printf("%d!= %d", n, f);  
}  

int fact(int n)  
{  
    if (n==0)  
    {  
        return 1;  
    }  
    else if (n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n*fact(n-1);  
    }  
}  