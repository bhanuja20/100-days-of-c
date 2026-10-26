/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d43.c -o prog1_d43.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d43.out
abcd
dcba
*/
