#include<stdio.h>

int main()

{
	int a,b,temp=0;
	
	printf("Enter value of a\n");
	scanf("%d",&a);
	
	printf("Enter value of b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	
	printf("%d",a);
		printf("%d",b);
	
	
	return 0;
}
