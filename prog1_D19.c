/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main()
{
    int a, b, x, y, temp, hcf, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;
    lcm = (a * b) / hcf;

    printf("%d", lcm);

    return 0;
}
/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D19.c -o prog1_D19.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D19.out
4 5
20
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D19.out
7 3
21
*/