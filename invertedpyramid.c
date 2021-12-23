#include<stdio.h>
int main(){
	int i,j,k,l,spaces,rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	i=rows;
	for(i;i>=1;i--){
		for(j=1;j<=spaces;j++){
			printf(" ");
		}
		spaces+=1;
		k=i*2-1;
		for(l=1;l<=k;l++){
			printf("*");
		}
		printf("\n");
	}
}
