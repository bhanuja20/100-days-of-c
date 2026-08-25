/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include <stdio.h>

int main()
{
	int day;
	
	scanf("%d", &day);
	
	switch(day)
	{
		case 1:
			printf("Monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
		
		case 3:
			printf("Wednesday");
			break;
			
		case 4:
			printf("Thursday");
			break;
			
		case 5:
			 printf("Friday");
			 break;
			 
		case 6:
			printf("Saturday");
			break;
			
		case 7:
			printf("Sunday");
			break;
			
		default:
			printf("Invalid day");
	}

		return 0;
	}
	
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D10.c -o prog2_D10.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D10.out
1
Monday
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D10.out
5
Friday
*/

		
			
			