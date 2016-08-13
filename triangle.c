/**
    triangle.c
    Purpose: Triangle is valid or not in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/
#include<stdio.h>
#include<math.h>

int main()
{
	//declaration of variables
	int a,b,c,d;
	
	//printing the values of variables
	//accepting the values of variable
	printf("Enter the angles of triangle");
	scanf("%d%d%d",&a,&b,&c);
	
	//values of three variable store into one variable
	d=a+b+c;
	
	//condition checking for valid or invalid triangle
	if(d==180)
	
	//printing triangle is valid or not
	printf("Triangle is valid ",d);
	
	else
	
	printf("Triangle is not valid",d);
	
	return 0;
}
