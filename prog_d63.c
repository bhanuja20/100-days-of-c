/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/


#include <stdio.h>

int main()
{
    int arr[100];
    int n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d", arr[k - 1]);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d63.c -o prog_d63.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d63.out
Enter number of elements: 10
Enter array elements: 10 5 4 3 48 6 2 33 53 10
Enter k: 4
5
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d63.out
Enter number of elements: 6
Enter array elements:  7 10 4 3 20 15
Enter k: 3
7
*/
