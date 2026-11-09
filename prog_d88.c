/*Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

int main()
{
    enum traffic
    {
        RED,
        YELLOW,
        GREEN
    };

    char names[3][10] = {"RED", "YELLOW", "GREEN"};
    int i;

    for(i = RED; i <= GREEN; i++)
    {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
/*
Welcome User!
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d88.c -o prog_d88.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d88.out
RED=0
YELLOW=1
GREEN=2
*/
