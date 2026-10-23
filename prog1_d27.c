/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
/*

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D27.c -o prog1_D27.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D27.out
*
***
*****
*******
*********
*******
*****
***
*
*/
