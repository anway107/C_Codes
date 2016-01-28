/**
    square.c
    Purpose: calculating square in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/
#include<stdio.h>

int main()

{
	//Declaration of the variables
	int n,square;
	
	//printf is used for priting on the console
    //scanf is used for taking the input from console
	printf("Enter the Number:");
	scanf("%d",&n);
	
	//Formulae for calculating square 
	square=n*n;
	
	
	//printf for showing the calculated square and cube
	printf("\n square is:%d",square);
	
	return 0;
}
