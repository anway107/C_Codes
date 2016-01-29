#include<stdio.h>

int main()
{
	int principal_amount,rate,no_of_years;
	float simple_interest;
	
	printf("Enter the principal amount\n");
	scanf("%d",&principal_amount);
	
	printf("Enter the rate\n");
	scanf("%d",&rate);
	
	printf("Enter the no of years\n");
	scanf("%d",&no_of_years);
	
	//Formulae for calculating simple interest
	simple_interest=principal_amount*rate*no_of_years/100;
	
	printf("\nsimple interest is %f",simple_interest);
	
	return 0;
}
