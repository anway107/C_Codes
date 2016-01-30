# include<stdio.h>

int main()
{
	int Ram_age,Shyam_age,Ajay_age;
	
	printf("Enter Ram age");
	scanf("%d",&Ram_age);
	
		printf("Enter Shyam age");
	scanf("%d",&Shyam_age);
	
		printf("Enter Ajay age");
	scanf("%d",&Ajay_age);
	
	if(Ram_age>Shyam_age)
	printf("shyam is younger",Shyam_age);
	
	else if(Shyam_age>Ajay_age)
	printf("ajay is younger",Ajay_age);
	
	else if(Ajay_age>Ram_age)
	printf("ram is younger",Ram_age);
	
	return 0;
}
