/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d", a);

    return 0;
}
/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D18.c -o prog2_D18.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D18.out
12 18
6
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D18.out
7 9
1
*/