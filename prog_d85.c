/*Q135: Assign explicit values starting from 10 and print them.

Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/

#include <stdio.h>

int main()
{
    enum values
    {
        A = 10,
        B,
        C
    };

    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d85.c -o prog_d85.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d85.out
A=10
B=11
C=12
*/
