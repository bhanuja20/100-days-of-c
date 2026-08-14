/*Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

int main()
{
	int a, b, temp;
	
	scanf("%d%d",&a, &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("After swap: %d%d", a, b);
	
	return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D3.c -o prog2_D3.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D3.out
3 5
After swap: 53
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D3.c -o prog2_D3.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D3.out
3 5
After swap: 53
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D3.out
-1 1
After swap: 1-1

*/

