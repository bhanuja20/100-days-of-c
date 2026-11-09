/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>

int main()
{
    int nums[100];
    int n, i;
    int totalSum, arraySum = 0;
    int missing;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        arraySum = arraySum + nums[i];
    }

    totalSum = n * (n + 1) / 2;

    missing = totalSum - arraySum;

    printf("%d", missing);

    return 0;
}
/*
Merged array: 2 4 7 8 10 11 15
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d68.c -o prog_d68.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d68.out
Enter size of array: 0
Enter array elements: 0
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d68.out
Enter size of array: 4
Enter array elements: 0 3 8 4
-5
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d68.out
Enter size of array: 4
Enter array elements: 0 3 2 4
1
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d68.out
Enter size of array: 3
Enter array elements:  1 2 3
0
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d68.out
Enter size of array: 5
Enter array elements: 0 4 3 1 5
2
*/
