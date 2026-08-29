/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main()
{
	float cp, sp, percentage;
	int results;
	
	scanf("%f%f", &cp, &sp);
	
	if (sp > cp)
		results = 1;
	else if (sp < cp)
		results = 2;
	else 
		results = 3;
		
	switch(results)
	{
		case 1:
			percentage = ((sp - cp) / cp) * 100;
			printf("Profit percentage = %.2f", percentage);
			break ;
			
		case 2:
			percentage = ((cp - sp) / cp) * 100;
			printf("Loss percentage = %.2f", percentage);
			break ;
			
		case 3:
			printf("No profit No Loss");
			break ;
			
		}
		
		return 0;
		
	}
	
/*C:\Users\BHANUJA SINGHAL\OneDrive\Desktop>cd c

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog2_D11.c -o prog2_D11.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D11.out
1000 1200
Profit percentage = 20.00
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D11.out
1000 1600
Profit percentage = 60.00
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog2_D11.out
1000 1000
No profit No Loss
*/
