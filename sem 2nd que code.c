#include<stdio.h>
int main(){
int a[8][8];
int i,j;
for(i=0;i<8;i++){
for(j=0;j<8;j++){
if(i%2==0 && j%2==0){
a[i][j]=1;
}
}
}
for(i=0;i<8;i++){
for(j=0;j<8;j++){
if(i%2!=0 && j%2!=0){
a[i][j]=1;
}
}
}
for(i=0;i<8;i++){
for(j=0;j<8;j++){
if(i%2==0 && j%2!=0){
a[i][j]=0;
}
}
}
for(i=0;i<8;i++){
for(j=0;j<8;j+=2){
if(i%2!=0 && j%2==0){
a[i][j]=0;
}
}
}
int x,y,z,m1;
scanf("%d%d%d%d",&x,&y,&z,&m1);
if(a[x][y]==a[z][m1]){
printf("true");
}
else{
printf("false");
}}
