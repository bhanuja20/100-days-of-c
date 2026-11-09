/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>

int main()
{
    enum traffic
    {
        RED,
        YELLOW,
        GREEN
    };

    enum traffic light;
    char input[20];

    printf("Enter traffic light: ");
    scanf("%s", input);

    if(strcmp(input, "RED") == 0)
    {
        light = RED;
    }
    else if(strcmp(input, "YELLOW") == 0)
    {
        light = YELLOW;
    }
    else if(strcmp(input, "GREEN") == 0)
    {
        light = GREEN;
    }
    else
    {
        printf("Invalid traffic light");
        return 0;
    }

    if(light == RED)
    {
        printf("Stop");
    }
    else if(light == YELLOW)
    {
        printf("Wait");
    }
    else if(light == GREEN)
    {
        printf("Go");
    }

    return 0;
}
/*
Invalid traffic light
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d82.c -o prog_d82.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d82.out
Enter traffic light: YELLOW
Wait
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d82.out
Enter traffic light: GREEN
Go
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d82.out
Enter traffic light: RED
Stop
*/
