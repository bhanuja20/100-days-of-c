/*Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main()
{
	float r, area, circumference;
	float pi = 3.14159;
	
	scanf("%f", &r);
	
	area = pi*r*r;
	circumference = 2*pi*r;
	
	printf("Area=%.2f, circumference=%.2f",area,circumference);
	
	return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_d2.c -o prog2_D2.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D2.out
7
Area=153.94, circumference=43.98
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D2.out
3
Area=28.27, circumference=18.85

*/

