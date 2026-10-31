/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, start = 0, end, j;
    char temp;

    fgets(str, 100, stdin);

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            for(j = start; j < end; j++, end--)
            {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("%s", str);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d48.c -o prog2_d48.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_d48.out
I love coding
I evol gnidoc
*/
