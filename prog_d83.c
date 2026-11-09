/*Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>

int main()
{
    enum months
    {
        JAN = 1,
        FEB,
        MAR,
        APR,
        MAY,
        JUN,
        JUL,
        AUG,
        SEP,
        OCT,
        NOV,
        DEC
    };

    enum months month;
    int choice;

    printf("Enter month number (1-12): ");
    scanf("%d", &choice);

    month = choice;

    if(month == FEB)
    {
        printf("28 or 29 days");
    }
    else if(month == APR || month == JUN || month == SEP || month == NOV)
    {
        printf("30 days");
    }
    else if(month >= JAN && month <= DEC)
    {
        printf("31 days");
    }
    else
    {
        printf("Invalid month");
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d83.c -o prog_d83.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d83.out
Enter month number (1-12): 2
28 or 29 days
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d83.out
Enter month number (1-12): 3
31 days
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d83.out
Enter month number (1-12): 7
31 days
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d83.out
Enter month number (1-12): 12
31 days
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d83.out
Enter month number (1-12): 6
30 days
*/
