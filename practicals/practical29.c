#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main()
 {
 char*str;
 int initial_size=20;
 int new_size=50;
 //Allocatememoryusingcalloc()
 str=(char*)calloc(initial_size,sizeof(char));
 if(str==NULL)
 {
 printf("Memoryallocationfailed\n");
 return 1;
 }
 //Inputastringwithinitialmemoryallocation
 printf("Enterastring(max%dcharacters):",initial_size-1);
 fgets(str,initial_size,stdin);

str[strcspn(str, "\n")] = '\0'; // Remove trailing newline if present
 printf("String before realloc(): %s\n", str);
 // Resize memory block using realloc()
 str = (char *)realloc(str, new_size *
 sizeof(char)); if (str == NULL)
 {
 printf("Memory reallocation failed\n"); 
 return 1;
 }
 // Append additional input to the resized string
 printf("Enter additional string to concatenate (max %d characters): ", new_size- initial_size- 1);
 fgets(str + strlen(str), new_size- strlen(str), stdin);
 str[strcspn(str, "\n")] = '\0'; // Remove trailing newline if present
 printf("String afier realloc(): %s\n", str);
 // Free allocated memory
 free(str);
 return 0;
 }