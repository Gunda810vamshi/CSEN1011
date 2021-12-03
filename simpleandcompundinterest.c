/*Alogrithm
Step 1:Start
step 2:Enter the value of Principle(p)
step 3:Enter the value of Time period(t)
step 4:Enter the value Rate of interest(r)
step 5:Calculate simple interest by using the formlula
step 6:calculate compound interest by using the formula
step 7:stop
*/









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


/*learnings
........know to excute a simple programming
.......know to excute a programming which iuncludes formula
.......know to excute simple and compund interest programming
*/
