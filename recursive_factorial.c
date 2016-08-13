/**
    recusrsive_factorial.c
    Purpose: Finding the factorial of a given number
    Application : Factorial is used in finding the permutation,combination and many other trigonomatric functions
    @author Anway Kulkarni
*/
#include<stdio.h>

//Defination of function
int factorial(int nubmer);

int main()
{
    //Declaration of the variables
    int number;

    printf("Enter the number\n");
    scanf("%d",&number);
    printf("Factorial of the number :- ");
    printf("%d\n",factorial(number));

    return 0;
}

//Declaration of a function
//Recursive function for calculating the factorial
int factorial(int number)
{

    if( number != 1)
        return number * factorial(number - 1);

}
