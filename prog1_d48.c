/*Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    scanf("%s", str1);
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2))
    {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d48.c -o prog1_d48.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d48.out
abcde
deabc
Rotation
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d48.out
abc
acb
Not rotation
*/
