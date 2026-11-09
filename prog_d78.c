/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    return 0;
}
/*
output.txt created successfully!
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_D78.c -o prog_D78.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_D78.out
Vowels: 8
Consonants: 10
*/
