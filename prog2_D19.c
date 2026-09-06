/*Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D19.c -o prog2_D19.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D19.out
Enter a number: 123
6
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D19.out
Enter a number: 999
27
*/