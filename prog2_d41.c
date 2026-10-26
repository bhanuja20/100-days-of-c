/*Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
Hi

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d41.c -o prog2_d41.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d41.out
Hi
H
i
*/
