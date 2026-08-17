/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>

int main()
{
	char ch;
	
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	if(ch >= 'A' && ch <= 'Z')
		printf("Uppercase alphabet");
	else if (ch >= 'a' && ch <= 'z')
		printf("Lowercase alphabet");
	else if (ch >= '0' && ch <= '9')
		printf("Digit");
	else
		printf("special character");
		
	return 0;
}
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D8.c -o prog1_D8.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D8.out
Enter a character: A
Uppercase alphabet
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D8.out
Enter a character: a
Lowercase alphabet
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D8.out
Enter a character: 3
Digit
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D8.out
Enter a character: #
special character
*/

