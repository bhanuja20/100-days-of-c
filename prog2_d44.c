/*Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '-';
        }
    }

    printf("%s", str);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d44.c -o prog2_d44.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d44.out
hello world
hello-world
*/
