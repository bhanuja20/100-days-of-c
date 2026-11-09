/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 1;
    int inword = 0;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
        {
            lines++;
        }

        if(ch == ' ' || ch == '\n')
        {
            inword = 0;
        }
        else if(inword == 0)
        {
            words++;
            inword = 1;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

/*

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d73.c -o prog_d73.out
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d73.out
Characters: 33
Words: 6
Lines: 2
*/
