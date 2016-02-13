# include<stdio.h>

int main()
{
	int basic_salary,dearness_allowance,houserent_allowance,gross_salary;
	
	printf("Enter the basic salary");
	scanf("%d",&basic_salary);
	
	dearness_allowance=basic_salary*40/100;
	houserent_allowance=basic_salary*20/100;
	
	
	gross_salary=basic_salary+dearness_allowance+houserent_allowance;
	
	printf("gross salary is%d",gross_salary);
	
	
	return 0;
}
