#include <stdio.h>
int main()  
{
 int n,rev;
 int r=0;
 
printf("Enter the three digit number= ",n);
scanf("%d",&n);



   
   while (n!=0)
   
    {
	  rev=n%10;
     r=(r*10)+rev;
     n=n/10;
 }
     
  printf("reverse number:%d",r);   
     
   }
