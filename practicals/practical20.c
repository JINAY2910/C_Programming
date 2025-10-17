#include <stdio.h>
void welcomeMessage();
int getNumberOfStudents();
void displayGrades(int grades[], int n);
float calculateAverageGrade(int grades[], int n);
int main(){
    welcomeMessage();
    int numStudents = getNumberOfStudents();
    int grades[numStudents];
    printf("\nStudent Grades:\n");
    for(int i = 0; i < numStudents; i++){
        printf("Enter the grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
        printf("Student %d: Grade = %d\n",i+1,grades[i]);
    }
    displayGrades(grades, numStudents);
    float average = calculateAverageGrade(grades, numStudents);
    printf("The average grade of the students is: %.2f\n", average);
return 0;
}
void welcomeMessage(){
    printf("Welcome to CHARUSAT University!\n");
    printf("===============================\n\n");
}
int getNumberOfStudents(){
    int n;
    printf("Enter the number of students: ");
    Grade: Sign:
    scanf("%d", &n);
return n;
}
void displayGrades(int grades[], int n){
    for(int i = 0; i < n; i++){
        printf("Enter the grade for student %d (for average calculation): %d\n", i + 1, grades[i]);
    }
}
float calculateAverageGrade(int grades[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += grades[i];
    }
return (float)sum / n;
}