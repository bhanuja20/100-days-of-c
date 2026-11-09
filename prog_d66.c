/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/

#include <stdio.h>

int main()
{
    int nums[100];
    int n, target;
    int i, j;
    int first = -1, second = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                first = i;
                second = j;
                break;
            }
        }

        if(first != -1)
        {
            break;
        }
    }

    printf("%d %d", first, second);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d66.c -o prog_d66.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d66.out
Enter number of elements: 4
Enter array elements: 2 7 11 15
Enter target: 9
0 1
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d66.out
Enter number of elements: 3
Enter array elements: 3 2 4
Enter target: 6
1 2
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d66.out
Enter number of elements: 2
Enter array elements: 3 3
Enter target: 6
0 1
*/
