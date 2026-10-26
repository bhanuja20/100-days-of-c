/*Q89: Count frequency of a given character in a string.


Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    scanf("%s", str);
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d45.c -o prog1_d45.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d45.out
programming
g
2
*/
