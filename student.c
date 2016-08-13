#include<stdio.h>

int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	float percentage,aggregate,m;
	
	printf("Enter the marks of sub1");
	scanf("%d",&sub1);
	
	printf("Enter the marks of sub2");
	scanf("%d",&sub2);
	
	printf("Enter the marks of sub3");
	scanf("%d",&sub3);
	
	printf("Enter the marks of sub4");
	scanf("%d",&sub4);
	
	printf("Enter the marks of sub5");
	scanf("%d",&sub5);
	
	//formula for calculating
	m=sub1+sub2+sub3+sub4+sub5;
	percentage=m/500*100;
	printf("percentage is %f \n",percentage);
//	printf("aggregate is %f",aggregate);
	
	return 0;
	
}
