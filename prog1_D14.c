/*Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + (2 * i - 1);
    }

    printf("%d", sum);

    return 0;
}
/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D14.c -o prog1_D14.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D14.out
3
9
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D14.out
5
25
*/