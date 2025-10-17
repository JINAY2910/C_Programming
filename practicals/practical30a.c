#include <stdio.h>
#include <string.h>
void reverseString(char *str) {
    int start = 0, end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    FILE *file = fopen("Demo.txt", "r");
    char ch, word[100];
    int i = 0;
    if (file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            word[i++] = ch;
        } else {
            if (i > 0) {
                word[i] = '\0';
                reverseString(word);
                printf("%s", word);
                i = 0;
            }
            putchar(ch);
        }
    }
    if (i > 0) {
        word[i] = '\0';
        reverseString(word);
        printf("%s", word);
    }
    fclose(file);
    return 0;
}
