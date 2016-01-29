/**
    int.c
    Purpose: interchanging the values using third variable in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/
#include<stdio.h>

int main()

{
	//declaration of variables
	int a,b,temp=0;
	
	//printf is used for priting on the console
    //scanf is used for taking the input from console
	printf("Enter value of a\n");
	scanf("%d",&a);
	
	printf("Enter value of b:");
	scanf("%d",&b);
	//interchanging the values using third temp variable
	temp=a;
	a=b;
	b=temp;
	
	//printing interchanged values
	printf("%d",a);
	printf("%d",b);
	
	
	return 0;
}
