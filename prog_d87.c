/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/


#include <stdio.h>

int main()
{
    enum role
    {
        ADMIN = 1,
        USER,
        GUEST
    };

    enum role r;
    int choice;

    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter role: ");
    scanf("%d", &choice);

    r = choice;

    if(r == ADMIN)
    {
        printf("Welcome Admin!");
    }
    else if(r == USER)
    {
        printf("Welcome User!");
    }
    else if(r == GUEST)
    {
        printf("Welcome Guest!");
    }
    else
    {
        printf("Invalid role");
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d87.c -o prog_d87.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d87.out
1. ADMIN
2. USER
3. GUEST
Enter role: 3
Welcome Guest!
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d87.out
1. ADMIN
2. USER
3. GUEST
Enter role: 1
Welcome Admin!
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d87.out
1. ADMIN
2. USER
3. GUEST
Enter role: 2
Welcome User!
*/
