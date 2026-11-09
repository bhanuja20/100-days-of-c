/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be created");
        return 0;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStudent Records:\n");

    while(fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
/*
C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>gcc prog_d80.c -o prog_d80.out

C:\Users\BHANUJA SINGHAL\OneDrive\Desktop\c>prog_d80.out
Enter number of students: 2

Enter name: Asha
Enter roll number: 101
Enter marks: 85

Enter name: Ravi
Enter roll number: 102
Enter marks: 92

Student Records:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/
