/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main()
{
    int n, reverse = 0, digit;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}
/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D15.c -o prog2_D15.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D15.out
1234
4321
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D15.out
100
1
*/