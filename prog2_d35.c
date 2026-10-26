/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main()
{
    int n, a[100], i, j, k, temp;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for(i = 0; i < k; i++)
    {
        temp = a[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d35.c -o prog2_d35.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d35.out
5
1 2 3 4 5
2
4 5 1 2 3
*/
