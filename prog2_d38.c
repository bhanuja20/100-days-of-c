/*Q76: Check if a matrix is symmetric.


Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main()
{
    int a[10][10], i, j, row, col;
    int check = 1;

    scanf("%d %d", &row, &col);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(row != col)
    {
        check = 0;
    }
    else
    {
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    check = 0;
                }
            }
        }
    }

    if(check == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d38.c -o prog2_d38.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d38.out
2 2
1 2
2 1
True
*/
