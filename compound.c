#include <stdio.h>
int main() {
  
    int p,t,r;


    printf("Principle= ");
    scanf("%d",&p);

    printf("Time of period= ");
    scanf("%d",&t);

    printf("Rate of interest= ");
    scanf("%d",&r);

   printf("simple inetrest=%d \n" ,(p*t*r/100));
    printf("compound interest=%d",(p*(1+r/100)*t));
  }
