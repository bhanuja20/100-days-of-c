/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main()
{
    int a[100], n, i, key, found = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("-1");
    }

    return 0;
}
/*

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_d31.c -o prog1_d31.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_d31.out
Found at index 2
-1
*/
