/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main()
{
    int n, binary[32], i = 0, j;

    scanf("%d", &n);

    while(n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    return 0;
}
/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D16.c -o prog1_D16.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D16.out
10
1010
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D16.out
7
111
*/
