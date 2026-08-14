/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main()
{
	float celsius, fahrenheit;
	scanf("%f",&celsius);
	fahrenheit = (celsius*9/5)+32;
	
	printf("Fahrenheit=%.0f",fahrenheit);
	
	return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D3.c -o prog1_D3.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D3.out
0
Fahrenheit=32
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D3.out
100
Fahrenheit=212

*/

