/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main()
{
    int nums[100];
    int count[100] = {0};
    int n, i;
    int repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);

        if(count[nums[i]] == 1)
        {
            repeated = nums[i];
        }

        count[nums[i]]++;
    }

    printf("%d", repeated);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d69.c -o prog_d69.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d69.out
Enter number of elements: 4
Enter array elements: 1 3 3 4
3
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d69.out
Enter number of elements: 3
Enter array elements: 1 2 2
2
*/
