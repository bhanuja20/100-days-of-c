/*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main()
{
    int n, i, flag = 0;

    scanf("%d", &n);

    if(n <= 1)
    {
        flag = 1;
    }
    else
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}
/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D17.c -o prog2_D17.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D17.out
7
Prime
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D17.out
10
Not prime
*/