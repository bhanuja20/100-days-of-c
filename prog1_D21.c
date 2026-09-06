/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int n, first, last, digits = 1, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while(temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    result = n - first * digits - last;
    result = result + last * digits + first;

    printf("%d", result);

    return 0;
}
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D21.c -o prog1_d21.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D21.out
Enter a number: 1234
4231
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D21.out
Enter a number: 1001
1001
*/