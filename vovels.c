/**
    addition.c
    Purpose: Calculation area of circle in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/
#include<stdio.h>

int main()
{
	//Declaration of the variables
	char ch;
	
	//printf is used for priting on the console
    //scanf is used for taking the input from console
	printf("Enter the charecter\n");
	scanf("%c",&ch);

    // conditions for checking vovel or not	
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
	
	//printing which are vovels
	printf("%c is vovel\n");
	
	else
	// printing which are not
	printf("%c is not vovel");
	
	return 0;
}

