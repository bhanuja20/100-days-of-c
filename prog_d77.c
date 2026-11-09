#include <stdio.h>

int main()
{
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");

    if(input == NULL)
    {
        printf("Error: input.txt not found!");
        return 0;
    }

    output = fopen("output.txt", "w");

    if(output == NULL)
    {
        printf("Error: output.txt could not be created!");
        fclose(input);
        return 0;
    }

    while((ch = fgetc(input)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("output.txt created successfully!");

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_D77.c -o prog_D77.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_D77.out
output.txt created successfully!
*/
