/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D22.c -o prog2_D22.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D22.out
Enter number of terms: 3
Approximate sum: 2.6
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D22.out
Enter number of terms: 5
Approximate sum: 4.4
*/