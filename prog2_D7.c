/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main()
{
	char ch;
	
	scanf("%c", &ch);
	
	if(ch == 'a' || ch == 'e' ||ch == 'i' || ch == 'o' ||ch == 'u' || ch == 'A' || ch == 'E' ||
		ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("Vowel");
	}
	else
	{
		printf("Constant");
	}
	
	return 0;
}
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D7.c -o prog2_D7.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D7.out
a
Vowel
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D7.out
b
Constant
*/

	