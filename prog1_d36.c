/*Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d36.c -o prog1_d36.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d36.out
2 2
1 2
3 4
1 2
3 4
*/
