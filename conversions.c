#include<stdio.h>
#include<math.h>

int main()
{
	int km,meters,inches,cms;
	float feet;
	
	printf("Enter the number");
	scanf("%d",&km);
	
	//Formulae for calculations
	meters=km*1000;
	feet=meters*3.28;
	inches=feet*12;
	cms=km*10000;
	
	
	printf("%d meters\n",meters);
	printf("%f feet\n",feet);
	printf("%d inches\n",inches);
	printf("%d centimeters\n",cms);
	
	return 0;
	
}
