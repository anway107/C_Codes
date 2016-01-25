/**
    number_pyramid.c
    Purpose: A C program for logic development
    @author Anway Kulkarni
*/
#include<stdio.h>

int main()
{
    int i,j,k,number_of_lines,print_number;
    number_of_lines = 5;
    print_number = 1;

    //loop with variable i is used for lines
    //loop with variable k is used for spaces
    //loop with variable j is used for printing the numbers for every line
    for( i = 0; i < n ; i++ )
    {
        for(k = n ; k>=i ; k-- )
            printf(" ");

        for(j = 0 ; j < i ; j++ )
        {
            printf(" %d",print_number++);
        }
        printf("\n");
    }
return 0;
}
