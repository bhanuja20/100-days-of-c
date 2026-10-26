/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int row, col, i, j;

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
        sum[i] = 0;

        for(j = 0; j < col; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    for(i = 0; i < row; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d37.c -o prog1_d37.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d37.out
2 3
1 2 3
4 5 6
6 15
*/
