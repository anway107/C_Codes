/**
    addition.c
    Purpose:  printing values of two numbers in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/
#include<stdio.h>

int main()
{
	//Declaration of the variables
	int num1,num2;
	
	//printf for the printing the value
	//scanf for accepting the value
	printf("Enter the num1:\n");
	scanf("%d",&num1);
	
	printf("Enter the num2:\n");
	scanf("%d",&num2);
	
	//this printf is for printing those accepted values
	printf("\nnum1: %d\nnum2: %d",num1,num2);
	return 0;
}
