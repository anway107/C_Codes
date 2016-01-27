/**
    addition.c
    Purpose: odd and even number in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/

#include<stdio.h>
#include<math.h>

int main()
{
	//Declaration of the variables
	int n;
	
	//printf is used for priting on the console
    //scanf is used for taking the input from console
	printf("Enter the number:");
	scanf("%d",&n);
	
	//condition for checking number is odd or even
	if(n%2==0)
	 
	 //printing if number is even
	 printf("%d is even number",n);
	 
	 else
	 
	 //printing if number is odd
	 printf("%d is odd number",n);
	 
	 return 0;
		
	}
