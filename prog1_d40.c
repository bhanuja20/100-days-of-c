/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
    int a[10][10];
    int row, col, i, j, d;

    scanf("%d %d", &row, &col);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(d = 0; d < row + col - 1; d++)
    {
        for(i = 0; i < row; i++)
        {
            j = d - i;

            if(j >= 0 && j < col)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d40.c -o prog1_d40.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d40.out
3 3
1 2 3
4 5 6
7 8 9
1 2 4 3 5 7 6 8 9
*/
