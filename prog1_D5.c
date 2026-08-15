/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main()
{
	float p, r, t, si,ci;
	
	scanf("%f%f%f", &p, &r, &t);
	
	si = (p*r*t)/100;
	ci = p*pow((1+r/100),t)-p;
	
	 printf("Simple interest=%.0f,Compound intrest=%.2f", si, ci);
	 
	return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog1_D5.c -o prog1_D5.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D5.out
1000 5 2
Simple interest=100,Compound intrest=102.50
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog1_D5.out
5000 7 3
Simple interest=1050,Compound intrest=1125.22

*/

 
 