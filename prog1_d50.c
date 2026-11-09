/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if(month == 4)
    {
        printf("%02d-Apr-%d", day, year);
    }

    return 0;
}


/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d50.c -o prog1_d50.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d50.out
Enter date (dd/mm/yyyy): 16/04/2456
16-Apr-2456
*/

