#include <stdio.h>
int main() {
    FILE *file;
    int marks, choice;
    file = fopen("marks.dat", "wb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter marks to write to the file (-1 to stop):\n");
    while (1) {
        printf("Enter marks: ");
        scanf("%d", &marks);
        if (marks == -1) break;
        putw(marks, file);
    }
    fclose(file);
    file = fopen("marks.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Marks read from the file:\n");
    while ((marks = getw(file)) != EOF) {
        printf("%d\n", marks);
    }
    fclose(file);
    return 0;
}





