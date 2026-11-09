/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>

int main()
{
    enum status
    {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    enum status result;
    int choice;

    printf("Enter 0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT: ");
    scanf("%d", &choice);

    result = choice;

    if(result == SUCCESS)
    {
        printf("Operation successful");
    }
    else if(result == FAILURE)
    {
        printf("Operation failed");
    }
    else if(result == TIMEOUT)
    {
        printf("Operation timed out");
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}
/*
30 days
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d84.c -o prog_d84.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d84.out
Enter 0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT: 1
Operation failed
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d84.out
Enter 0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT: 0
Operation successful
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d84.out
Enter 0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT: 2
Operation timed out
*/
