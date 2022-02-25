#include<stdio.h>
#include<string.h>
struct customer{
char name[15];
int amount;
char mobile_no[10];
};
int main(){
struct customer s1[32];
int i,j,m=0;
//printf("enter no of customers :");
//scanf("%d",&i);
for(j=0;j<2;j++){
scanf("%s",s1[j].name);
scanf("%d",&s1[j].amount);
scanf("%s",s1[j].mobile_no);
}
for(j=0;j<2;j++){
if(s1[j].amount<0){
printf("Invalid Amount");
return 0;
}
 if(strlen(s1[j].mobile_no)!=10){
printf("Invalid Mobile Number\n");
return 0;

}
 int i=0;
 while(i!=10){
     if(!(s1[j].mobile_no[i]>='0' && s1[j].mobile_no[i]<='9')){
         printf("invalid entry");
         return 0;
     }
     i+=1;
 }

}
printf("%d",s1[0].amount+s1[1].amount);
}
