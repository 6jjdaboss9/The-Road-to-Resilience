#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { 
    int skill; 
    int strength; 
    int resilience; 
} person; 

void printPerson(person *p) { 
    printf("Skill: %d\nStrength: %d\nResilience: %d\n", 
            p->skill, p->strength, p->resilience); 
} 

person * createPerson(int skill, int strength, int resilience) { 
    person * p = (person*)malloc(sizeof(person)); 
    p->skill = skill; 
    p->strength = strength; 
    p->resilience = resilience; 
    return p; 
} 

int main() { 
    person * p = createPerson(10, 8, 5); 
    int skill_improvement = 0; 
    int strength_improvement = 0; 
    int resilience_improvement = 0; 

    printf("\nOriginal score:\n"); 
    printPerson(p); 

    int choice = 0; 
    while (choice != 4) { 
        printf("\nChoose an option:\n"); 
        printf("1. Train skill\n"); 
        printf("2. Exercise strength\n"); 
        printf("3. Develop resilience\n"); 
        printf("4. Exit\n"); 
        printf("\n Your choice: "); 

        scanf("%d", &choice); 
        switch (choice) { 
            case 1: 
                printf("\nLet's train skill.\nWhat's your improvement?\n"); 
                scanf("%d", &skill_improvement); 
                p->skill += skill_improvement; 
                break; 
            case 2: 
                printf("\nLet's exercise strength.\nWhat's your improvement?\n"); 
                scanf("%d", &strength_improvement); 
                p->strength += strength_improvement; 
                break; 
            case 3: 
                printf("\nLet's develop resilience.\nWhat's your improvement?\n"); 
                scanf("%d", &resilience_improvement); 
                p->resilience += resilience_improvement; 
                break; 
        } 
    } 
    printf("\nYour scores after your improvement:\n"); 
    printPerson(p); 


    free(p); 
    return 0; 
}