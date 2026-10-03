/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include <stdio.h>
int main()
{
	int i, j;
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j<=5; j++0
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
