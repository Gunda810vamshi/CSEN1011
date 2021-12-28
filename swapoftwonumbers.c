#include <stdio.h>
 void swap(int a,int b){
     int temp;
     temp =a;
     a=b;
     b=temp;
    }
    
   int main(){
   
 int a,b;
 
 printf("value of a= ");
 scanf("%d",&a);
 
 printf("value of b= ");
 scanf("%d",&b);
 
 
 printf("before swap,value of a:%d \n",a);
 printf("before swap,value of b:%d \n",b);
 swap(a,b);
 printf("after swap,value of a:%d \n",a);
 printf("after swap,value of b:%d \n",b);
 }
