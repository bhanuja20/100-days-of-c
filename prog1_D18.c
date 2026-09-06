/*Q35: Write a program to print all factors of a given number.

Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D18.c -o prog1_D18.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D18.out
5
1 5
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D18.out
6
1 2 3 6
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D18.out
10
1 2 5 10
*/
