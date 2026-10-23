/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        if(i <= 3)
        {
            for(j = 1; j <= 2 * i - 1; j++)
            {
                printf("*\n");
            }
        }
        else
        {
            for(j = 1; j <= 2 * (6 - i) - 1; j++)
            {
                printf("*\n");
            }
        }

        printf("\n");
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D26.c -o prog2_D26.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D26.out
*

*
*
*

*
*
*
*
*

*
*
*

*
*/
