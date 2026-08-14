/*Q2 : Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>
int main()
{
	float a,b;
	printf("Enter two numbers:");
	scanf("%f%f",&a,&b);
	printf("Sum=%.2f\n",a+b);
	printf("Difference=%.2f\n",a-b);
	printf("Product=%.2f\n",a*b);
	
	if(b!=0)
		printf("Quotient=%.2f\n",a/b);
	else
		printf("Quotient cannot be calculated(division by zero).\n");
		
	return 0;
}

/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D1.c -o prog2_D1.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D1.out
Enter two numbers:10 2
Sum=12.00
Difference=8.00
Product=20.00
Quotient=5.00

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D1.out
Enter two numbers:7 3
Sum=10.00
Difference=4.00
Product=21.00
Quotient=2.33

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D1.out
Enter two numbers:7 5
Sum=12.00
Difference=2.00
Product=35.00
Quotient=1.40

*/