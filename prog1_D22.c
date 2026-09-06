/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int n, original, digit, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0) {
        digit = n % 10;

        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == original)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D22.c -o prog1_D22.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D22.out
Enter a number: 145
Strong number
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D22.out
Enter a number: 123
Not strong number
*/