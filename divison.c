/**
    division.c
    Purpose: Divison of two real numbers in C
    @author Anway Kulkarni
*/
#include<stdio.h>

int main()
{
    //Declaration of the variable
    //Float is used for storing the real number like 0.67,4.49.. etc
    float number1,number2,result;

    //printf is used for priting on the console
    //scanf is used for taking the input from console
    //%f is used for scaning the floating point numbers
    printf("Enter the first number\n");
    scanf("%f",&number1);

    printf("Enter the second number\n");
    scanf("%f",&number2);

    result = number1 - number2;

    printf("The result of substraction is :- ");
    printf("%f\n",result);
    return 0;
}

