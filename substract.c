#include<stdio.h>

int main()
{
    //Declaration of the variables
    int number1,number2,result;

    //printf is used for priting on the console
    //scanf is used for taking the input from console
    printf("Enter the first number\n");
    scanf("%d",&number1);

    printf("Enter the second number\n");
    scanf("%d",&number2);

    //Make Addition of the two numbers
    result = number1 - number2;

    printf("The result of substraction is :- ");
    printf("%d\n",result);
    return 0;
}

