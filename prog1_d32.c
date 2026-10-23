/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main()
{
    int n, digit, i;
    int count[10] = {0};
    int max = 0, answer = 0;

    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            answer = i;
        }
    }

    printf("%d", answer);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d32.c -o prog1_d32.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d32.out
112233
1
*/
