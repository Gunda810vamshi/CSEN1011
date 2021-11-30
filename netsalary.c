/* Alogrithm.
	Step 1:start
	step 2:Enter a basic salary
	step 3:Enter a hra
	step 4:Enter a ta
	step 5:Enter others
	step 6:Calculate da
	step 7:calculate pf
	step 8:calculate it
	step 9:Calculate net salary by formula provided
	step 10:Stop
	/*






#include <stdio.h>

int main()
{
	
	int basic, da, hra, ta, others;
	int pf,it;
	int net_salary;
	printf("Enter Basic Salary: ");
	scanf("%d",&basic);
	printf("Enter HRA: ");
	scanf("%d",&hra);
	printf("Enter TA: ");
	scanf("%d",&ta);	
	printf("Enter others: ");
	scanf("%d",&others);	
	da = (basic*12)/100;
	pf = (basic*14)/100;
	it = (basic*15)/100;
	net_salary = basic + da + hra + ta + others - (pf+it);
	printf("Net Salary is: %d\n",net_salary);
}


/*learnings
........know to excute a simple programming 
.........excution of formula based programmings
/*
