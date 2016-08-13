/**
    simple interest.c
    Purpose: calculating simple interest in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/
#include<stdio.h>

int main()
{
	int principal_amount,rate,no_of_years;
	float simple_interest;
	
	//printf is used for printing on the console
    //scanf is used for taking the input from console
	printf("Enter the principal amount\n");
	scanf("%d",&principal_amount);
	
	//printf is used for printing on the console
    //scanf is used for taking the input from console
	printf("Enter the rate\n");
	scanf("%d",&rate);
	
	//printf is used for printing on the console
    //scanf is used for taking the input from console
	printf("Enter the no of years\n");
	scanf("%d",&no_of_years);
	
	//Formulae for calculating simple interest
	simple_interest=principal_amount*rate*no_of_years/100;
	
	//printf is used for printing on the console
	printf("\nsimple interest is %f",simple_interest);
	
	return 0;
}
