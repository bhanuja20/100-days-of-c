/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main()
{
    int a[10][10], i, j, n, sum = 0;

    scanf("%d %d", &n, &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d39.c -o prog2_d39.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d39.out
3 3
1 2 3
4 5 6
7 8 9
15
*/
