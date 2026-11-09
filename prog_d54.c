/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>

int main()
{
    int n, x, i;
    int leftsum, rightsum;
    int pivot = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        leftsum = 0;
        rightsum = 0;

        for(i = 1; i <= x; i++)
        {
            leftsum = leftsum + i;
        }

        for(i = x; i <= n; i++)
        {
            rightsum = rightsum + i;
        }

        if(leftsum == rightsum)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}
/*
0
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d54.c -o prog_d54.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d54.out
Enter n: 8
6
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d54.out
Enter n: 1
1
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d54.out
Enter n: 4
-1
*/
