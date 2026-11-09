/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int currentSum, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    currentSum = arr[0];
    maxSum = arr[0];

    for(i = 1; i < n; i++)
    {
        if(currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d62.c -o prog_d62.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d62.out
Enter number of elements: 7
Enter array elements: 2 3 -8 7 -1 2 3
11
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d62.out
Enter number of elements: 2
Enter array elements: -2 -4
-2
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d62.out
Enter number of elements: 5
Enter array elements: 5 4 1 7 8
25
*/
