#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>  // Library for directory handling

void searchFiles(const char *directory, const char *fileName) {
    struct dirent *entry;
    DIR *dir = opendir(directory);

    if (!dir) {
        printf("Could not open directory: %s\n", directory);
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        // Check if the entry is a file and matches the input
        if (strcmp(entry->d_name, fileName) == 0) {
            printf("Found: %s/%s\n", directory, entry->d_name);
        }
    }

    closedir(dir);
}

int main() {
    char directory[256];
    char fileName[256];

    printf("Enter directory path: ");
    scanf("%s", &directory);

    printf("Enter file name to search: ");
    scanf("%s", &fileName);

    printf("\nSearching for '%s' in '%s'...\n", fileName, directory);
    searchFiles(directory, fileName);

    return 0;
}