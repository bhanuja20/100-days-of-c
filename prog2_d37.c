/*Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main()
{
    int a[10][10], i, j, row, col;

    scanf("%d %d", &row, &col);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(j = 0; j < col; j++)
    {
        for(i = 0; i < row; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d37.c -o prog2_d37.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d37.out
2 3
1 2 3
4 5 6
1 4
2 5
3 6
*/
