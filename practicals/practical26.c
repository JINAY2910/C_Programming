#include <stdio.h>
#include <string.h>
struct Coach {
    char name[50];
    int age;
    int experience;
};
struct Team {
    char team_name[50];
    char sport_type[50];
    struct Coach coach; 
};
void addTeam(struct Team teams[], int *count) {
    printf("Enter Team Name: ");
    getchar();  
    fgets(teams[*count].team_name, sizeof(teams[*count].team_name), stdin);
    teams[*count].team_name[strcspn(teams[*count].team_name, "\n")] = 0; 
    printf("Enter Sport Type: ");
    fgets(teams[*count].sport_type, sizeof(teams[*count].sport_type), stdin);
    teams[*count].sport_type[strcspn(teams[*count].sport_type, "\n")] = 0;  
    printf("Enter Coach's Name: ");
    fgets(teams[*count].coach.name, sizeof(teams[*count].coach.name), stdin);
    teams[*count].coach.name[strcspn(teams[*count].coach.name, "\n")] = 0;  
    printf("Enter Coach's Age: ");
    scanf("%d", &teams[*count].coach.age);
    printf("Enter Coach's Experience (in years): ");
    scanf("%d", &teams[*count].coach.experience);
    (*count)++; 
    printf("Team and Coach added successfully!\n\n");
}
void displayTeams(struct Team teams[], int count) {
    if (count == 0) {
        printf("No teams available to display.\n\n");
    } else {
        for (int i = 0; i < count; i++) {
            printf("Team Name: %s\n", teams[i].team_name);
            printf("Sport Type: %s\n", teams[i].sport_type);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Coach Experience: %d years\n", teams[i].coach.experience);
            printf("-----------------------------\n");
        }
    }
}
void searchTeam(struct Team teams[], int count) {
    char search_name[50];
    printf("Enter the team name to search: ");
    getchar();  
    fgets(search_name, sizeof(search_name), stdin);
    search_name[strcspn(search_name, "\n")] = 0;  
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(teams[i].team_name, search_name) == 0) {
            printf("Team Name: %s\n", teams[i].team_name);
            printf("Sport Type: %s\n", teams[i].sport_type);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Coach Experience: %d years\n", teams[i].coach.experience);
            printf("-----------------------------\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Team '%s' not found.\n\n", search_name);
    }
}
int main() {
    struct Team teams[10];  
    int count = 0;  

    int choice;
    while (1) {
        printf("Sports Team Management System\n");
        printf("1. Add Team\n");
        printf("2. Display All Teams\n");
        printf("3. Search Team by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTeam(teams, &count);
                break;
            case 2:
                displayTeams(teams, count);
                break;
            case 3:
                searchTeam(teams, count);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}