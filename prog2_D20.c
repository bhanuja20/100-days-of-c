/*Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    char binary[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for(i = 0; binary[i] != '\0'; i++) {
        if(binary[i] == '0')
            binary[i] = '1';
        else if(binary[i] == '1')
            binary[i] = '0';
    }

    printf("%s", binary);

    return 0;
}
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D20.c -o prog2_D20.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D20.out
Enter a binary number: 1010
0101
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D20.out
Enter a binary number: 1111
0000
*/