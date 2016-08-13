#include<stdio.h>

int main()
{
	float fahrenheit_degree,centigrade_degree;
	
	printf("Enter fehrenheit degrees");
	scanf("%f",&fahrenheit_degree);
	
	//formula
	centigrade_degree=(fahrenheit_degree-32)*5/9;
	
	printf("Enter centigrade degrees is %fdegree",centigrade_degree);
	
	return 0;
}
