/*
    whileloop.c
    Purpose: calculating simple interest using while in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/

#include<stdio.h>

int main()
{
	//Declaration of the variables
	int p,n,count,r,si;
	
	//initiating count to 1
	count=1;
	while(count<=2)
	{
	//printf is used for priting on the console
    //scanf is used for taking the input from console
		printf("Enter values of p,n,r");
		scanf("%d%d%d",&p,&n,&r);
		
		//formula for calculating simple interest
		si=p*n*r/100;
		
		//printing calculated simple interest
		printf("simple interest is %d\n",si);
		
		//increamenting count
		count++;
	}
	
      return 0;
}
