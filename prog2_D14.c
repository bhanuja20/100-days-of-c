/*Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main()
{
    int n, i, product = 1;

    scanf("%d", &n);

    for(i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("%d", product);

    return 0;
}
/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D14.c -o prog2_D14.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D14.out
4
8
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D14.out
6
48
*/