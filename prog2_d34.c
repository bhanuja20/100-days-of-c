/*Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main()
{
    int n, a[100], i, pos;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &pos);

    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d34.c -o prog2_d34.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d34.out
5
1 2 3 4 5
2
1 2 4 5
*/
