/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person p;
    char gender[10];

    scanf("Gender=%s", gender);

    if (strcmp(gender, "MALE") == 0)
        p.gender = MALE;
    else
        p.gender = FEMALE;

    if (p.gender == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}
/*
SUCCESS=0, FAILURE=1, TIMEOUT=2
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d90.c -o prog_d90.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d90.out
Gender=MALE
Male
*/
