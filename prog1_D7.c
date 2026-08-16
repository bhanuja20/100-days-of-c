/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>

int main()
{
	int year;
	
	scanf("%d", &year);
	
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		printf("Leap year");
	}
	else
	{
		printf("Not a leap year");
	}
	
	return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D7.c -o prog1_D7.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D7.out
2020
Leap year
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D7.out
1900
Not a leap year
*/