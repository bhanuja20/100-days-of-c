/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>

int main()
{
    enum operation
    {
        ADD = 1,
        SUBTRACT,
        MULTIPLY
    };

    enum operation choice;
    int ch, a, b;

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter choice: ");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    choice = ch;

    switch(choice)
    {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
/*

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d86.c -o prog_d86.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d86.out
1. ADD
2. SUBTRACT
3. MULTIPLY
Enter choice: 1
Enter two numbers: 10 20
30
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d86.out
1. ADD
2. SUBTRACT
3. MULTIPLY
Enter choice: 2
Enter two numbers: 20 5
15
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d86.out
1. ADD
2. SUBTRACT
3. MULTIPLY
Enter choice: 3
Enter two numbers: 12 18
216
*/
