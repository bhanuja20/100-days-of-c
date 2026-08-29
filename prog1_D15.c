/*Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>

int main()
{
    int n, i, fact = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("%d", fact);

    return 0;
}
/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D15.c -o prog1_D15.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D15.out
5
120
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D15.out
3
6
*/