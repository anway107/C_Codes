/**
    addition.c
    Purpose: Calculation area of circle in C
    @author Anway Kulkarni
    @author Sanket Deshpande
    @author Mahesh Deshmukh
*/
#include<stdio.h>

int main()
{
    //Declaration of the variables
    float pi=3.14,radius,area;

    //printf is used for priting on the console
    //scanf is used for taking the input from console
    printf("Enter the radius of circle\n");
    scanf("%f",&radius);

    //Formulae of area of circle
    area=3.14*radius*radius;

    printf("Area of circle is :- ");
    printf("%.6f\n",area);
    return 0;
}


