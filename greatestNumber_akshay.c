/**Greatest among three numbres using ternary operator**/

#include<stdio.h>

int main()
{
int a,b,c,greatest;

printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);

greatest=(a>b)?(a>c?a:c):(b>c?b:c);

printf("greatest number is %d",greatest);



}
