/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main()
{
    int days, fine;

    scanf("%d", &days);

    if (days <= 5)
    {
        fine = days * 2;
        printf("Fine Rs.%d", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine Rs.%d", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine Rs.%d", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }

    return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D12.c -o prog1_D12.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D12.out
4
Fine Rs.8
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D12.c -o prog1_D12.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D12.out
8
Fine Rs.22
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D12.c -o prog1_D12.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D12.out
22
Fine Rs.102

*/