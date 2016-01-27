/**
    addition.c
    Purpose: Calculation area of circle in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/
#include<stdio.h>
#include<math.h>

int main()
{
	//Declaration of the variables
	int km,meters,inches,cms;
	float feet;
	
	//printf is used for priting on the console
    //scanf is used for taking the input from console
	printf("Enter the number");
	scanf("%d",&km);
	
	//Formulae for calculations
	meters=km*1000;
	feet=meters*3.28;
	inches=feet*12;
	cms=km*10000;
	
    //printf is used for printing on the console	
	printf("%d meters\n",meters);
	printf("%f feet\n",feet);
	printf("%d inches\n",inches);
	printf("%d centimeters\n",cms);
	
	return 0;
	
}
