/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d",&n);
	
	if(n > 0)
	{
		printf("Positive");
	}
	else if(n < 0)
	{
		printf("Negative");
	}
	else
	{
		printf("Zero");
	}
	
	return 0;
}
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D6.c -o prog2_D6.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D6.out
-5
Negative
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D6.out
0
Zero
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D6.out
10
Positive
*/
