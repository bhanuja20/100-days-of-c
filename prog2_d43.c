/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, check = 1;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            check = 0;
        }
    }

    if(check == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d43.c -o prog2_d43.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d43.out
madam
Palindrome
*/
