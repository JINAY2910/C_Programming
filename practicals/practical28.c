#include <stdio.h>
#define STUDENTS 10

// Function to categorize marks using pointers
void categorizeMarks(int *marks, int size, int *fail, int *pass, int *firstClass, int *distinction) 
{
    for (int i = 0; i < size; i++) 
    {
        if (*(marks + i) >= 70) 
        {
            (*distinction)++; 
        } 
        else if (*(marks + i) >= 60) 
        {
            (*firstClass)++;
        } 
        else if (*(marks + i) >= 40) 
        {
            (*pass)++;
        } 
        else 
        {
            (*fail)++;
        }
    }
}

int main() 
{
    int marks[STUDENTS];
    int fail = 0, pass = 0, firstClass = 0, distinction = 0;
    
    printf("Enter marks of %d students for the subject CEUC101:\n", STUDENTS);
    for (int i = 0; i < STUDENTS; i++) 
    {
        printf("Student %d: ", i + 1);
        scanf("%d", (marks + i)); // Using pointers to store marks
    }

    // Categorize the marks
    categorizeMarks(marks, STUDENTS, &fail, &pass, &firstClass, &distinction);

    printf("\nResult:\n");
    printf("DISTINCTION: %d\n", distinction);
    printf("FIRST CLASS: %d\n", firstClass);
    printf("PASS: %d\n", pass);
    printf("FAIL: %d\n", fail);
    return 0;
}