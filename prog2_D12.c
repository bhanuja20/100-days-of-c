/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>

int main()
{
    int units, bill;

    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Bill: Rs.%d", bill);

    return 0;
}

/*C:\Users\BHANUJA SINGHAL>cd OneDrive\Desktop\c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D12.c -o prog2_D12.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D12.out
50
Bill: Rs.250
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D12.out
150
Bill: Rs.850
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D12.out
250
Bill: Rs.1700
*/