// Write a C program to find one's complement of a binary number. 

#include <stdio.h>  

int main()  
{  
   int n;  
   
   printf("Enter the number of bits do you want to enter: ");  
   scanf("%d",&n);  
   
   char binary[n+1];    
   char onescomplement[n+1];    
   char twoscomplement[n+1];   
   
   printf("\nEnter the binary number of %d bits: ", n);  
   scanf("%s", binary);  
   
   printf("\nThe ones complement of the binary number is :");  
      
   for(int i = 0; i < n; i++)  
   {  
       if(binary[i]=='0')  
       onescomplement[i]='1';

       else if(binary[i]=='1')  
       onescomplement[i]='0';  
   }  
   
   onescomplement[n]='\0';  
   
   printf("%s",onescomplement);  

}