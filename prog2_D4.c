/*Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>

int main()
{
	int n, i,sum = 0;
	
	scanf("%d",&n);
	
	for(i = 1;i<=n;i++)
{
	sum = sum + i;
}

	printf("Sum=%d",sum);

	return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D4.c -o prog2_D4.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D4.out
5
Sum=15
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D4.out
10
Sum=55

*/
