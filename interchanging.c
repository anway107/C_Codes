#include<stdio.h>

int main()
{
	int c,d,temp;
	
	printf("Enter c and d");
	scanf("%d%d",&c,&d);
	
	temp=c;
	c=d;
	d=temp;
	
	printf("c is %d",c);
	printf("d is %d",d);
	
	return 0;
}
