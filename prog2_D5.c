/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main()
{
	int seconds, hours, minutes, sec;
	
	scanf("%d", &seconds);
	
	hours = seconds/3600;
	minutes = (seconds % 3600)/60;
	sec = seconds % 60;
	
	printf("%d:%d:%d", hours, minutes, sec);
	
	return 0;
}
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D5.c -o prog2_D5.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D5.out
3661
1:1:1
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D5.out
7322
2:2:2

*/
