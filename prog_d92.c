/*Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name, roll and marks for student %d:\n", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    printf("\nName\tRoll\tMarks\n");

    for(i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d92.c -o prog_d92.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d92.out
Enter name, roll and marks for student 1:
Asha 101 90
Enter name, roll and marks for student 2:
Rahul 102 85
Enter name, roll and marks for student 3:
Neha 103 92
Enter name, roll and marks for student 4:
Aman 104 78
Enter name, roll and marks for student 5:
Riya 105 88

Name    Roll    Marks
Asha    101     90
Rahul   102     85
Neha    103     92
Aman    104     78
Riya    105     88

*/
