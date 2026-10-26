/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main()
{
    int a[10][10], i, j, row, col, sum = 0;

    scanf("%d %d", &row, &col);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}

/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d36.c -o prog2_d36.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d36.out
2 3
1 2 3
4 5 6
21
*/
