/*
Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, x, i;
    int index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}
/*

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>>gcc prog_d52.c -o prog_d52.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d52.out
Enter number of elements: 7
Enter sorted array elements:  1 2 8 10 11 12 19
Enter x: 20
-1
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d52.out
Enter number of elements: 7
Enter sorted array elements:  1 2 8 10 11 12 19
Enter x: 5
2
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d52.out
Enter number of elements: 7
Enter sorted array elements:  1 2 8 10 11 12 19
Enter x: 0
0
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d52.out
Enter number of elements: 7
Enter sorted array elements:  1 2 8 10 11 12 19
Enter x: 2
1
*/
