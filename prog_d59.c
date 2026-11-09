/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, k, i, j;
    int sum, maxsum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    maxsum = 0;

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(sum > maxsum)
        {
            maxsum = sum;
        }
    }

    printf("%d", maxsum);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d59.c -o prog_d59.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d59.out
Enter number of elements: 4
Enter array elements: 100 200 300 400
Enter k: 2
700
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d59.out
Enter number of elements: 9
Enter array elements: 1 4 2 10 23 3 1 0 20
Enter k: 4
39
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d59.out
Enter number of elements: 4
Enter array elements: 100 200 300 400
Enter k: 1
400
*/
