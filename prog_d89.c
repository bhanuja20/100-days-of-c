/*Q139: Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/

#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d",
           SUCCESS, FAILURE, TIMEOUT);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d89.c -o prog_d89.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d89.out
SUCCESS=0, FAILURE=1, TIMEOUT=2
*/