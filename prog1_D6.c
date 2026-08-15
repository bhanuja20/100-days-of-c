/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.


Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	
	if(n % 2 == 0)
	{
	  printf("%d is even",n);
	}
	else
	{
	  printf("%d is odd",n);
	}
	
	return 0;
}
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D6.c -o prog1_D6.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D6.out
7
7 is odd
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D6.out
12
12 is even
*/