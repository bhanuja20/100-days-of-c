/*Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>

int main()
{
    char str[200];
    int i;

    printf("Enter string: ");
    fgets(str, 200, stdin);

    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    for(i = 1; str[i] != '\0'; i++)
    {
        if(str[i - 1] == ' ')
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
    }

    printf("%s", str);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d70.c -o prog_d70.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d70.out
Enter string: I am trying to build logic.
I Am Trying To Build Logic.

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d70.out
Enter string: The classes are supposed to start early.
The Classes Are Supposed To Start Early.

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d70.out
Enter string: We are going to look at 26 different test cases.
We Are Going To Look At 26 Different Test Cases.
*/
