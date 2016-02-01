/**
    younger bro.c
    Purpose: comparision of brothers in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/
# include<stdio.h>

int main()
{
	//Declaration of the variables
	int Ram_age,Shyam_age,Ajay_age;
	
	//printf is used for priting on the console
    //scanf is used for taking the input from console
	printf("Enter Ram age");
	scanf("%d",&Ram_age);
	
	printf("Enter Shyam age");
	scanf("%d",&Shyam_age);
	
	printf("Enter Ajay age");
	scanf("%d",&Ajay_age);
	
	//condition of comparision of ages
	if(Ram_age>Shyam_age)
	printf("shyam is younger",Shyam_age);
	
	else if(Shyam_age>Ajay_age)
	printf("ajay is younger",Ajay_age);
	
	else if(Ajay_age>Ram_age)
	printf("ram is younger",Ram_age);
	
	return 0;
}
