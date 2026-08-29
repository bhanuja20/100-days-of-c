/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main()
{
    int n, original, digit, sum = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if(sum == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}
/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D17.c -o prog1_D17.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D17.out
153
Armstrong
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D17.out
123
Not Armstrong
*/
