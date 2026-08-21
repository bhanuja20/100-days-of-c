/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>

int main()
{
	float a, b, c;
	
	printf("Enter the three sides of the triangle: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a == b && b == c)
	{
		printf("Equilateral triangle");
	}
	else if (a == b || b == c || a == c)
	{
		printf("Isosceles triangle");
	}
	else
	{
		printf("scalene triangle");
	}
	return 0;
}
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D10.c -o prog1_D10.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D10.out
Enter the three sides of the triangle: 3 3 3
Equilateral triangle
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D10.out
Enter the three sides of the triangle: 3 3 4
Isosceles triangle
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D10.out
Enter the three sides of the triangle: 2 3 4
scalene triangle
*/


	
	
	