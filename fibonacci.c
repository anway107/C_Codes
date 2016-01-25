/**
    addition.c
    Purpose: Fibonacci series in C
    Application: Golden Ratio,Fibonacci heap
    @author Anway Kulkarni
*/
#include<stdio.h>

int main()
{
    //Declaration of the variables
    int number;
    int i,num1,num2,temp;
    num1 = 0;
    num2 = 1;

    printf("How many fibonacci number you want\n");
    scanf("%d",&number);

    printf("Fibonacci Series :- \n  0  1 ");

    for( i = 0 ; i < number - 2 ; i++ ) {

        printf(" %d ",num1 + num2 );

        temp = num2;
        num2 = num1 +  num2;
        num1 = temp;

    }
    printf("\n");

    return 0;
}

