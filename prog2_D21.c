/*Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            sum = sum + i;
        }
    }

    if(sum == n)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D21.c -o prog2_D21.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D21.out
Enter a number: 6
Perfect number
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D21.out
Enter a number: 10
Not perfect number
*/