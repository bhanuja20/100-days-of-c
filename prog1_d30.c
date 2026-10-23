/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int even = 0, odd = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d30.c -o prog1_d30.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d30.out
6
1 2 3 4 5 6
Even=3, Odd=3
*/
