#include "header.h"


void inputNamePet();
void printNamePet();
void petStatus();
void playMenu();
void saveData();

int pet, hunger, happiness, health, choice;
char petName[100];

void newGame() {
    inputNamePet();
    random();

    srand(time(NULL));
    hunger = rand() % 60 + 20;
    happiness = rand() % 60 + 20;
    health = rand() % 60 + 20;

    refresh:
    getPet();

    linebreak;
    linebreak;
    printf("Your pet's name is: %s", petName);


    if (hunger >= 100) {
        hunger = 100;
    } else if (hunger <= 0) {
        return 0;
    }

    if (happiness >= 100) {
        happiness = 100;
    } else if (happiness <= 0) {
        return 0;
    }

    if (health >= 100) {
        health = 100;
    } else if (health <= 0) {
        return 0;
    }

    linebreak; linebreak;
    puts("Your Pet's Status: ");
    printf("Hunger      : %d", hunger); linebreak;
    printf("Happiness   : %d", happiness); linebreak;
    printf("Health      : %d", health); linebreak;

    linebreak;
    puts("Play Menu: ");
    puts("1. Play");
    puts("2. Eat");
    puts("3. Sleep");
    puts("4. Save Data");
    puts("5. Return Menu");
    puts("6. Exit");
    printf("choice: "); fflush(stdin);

    do {
        scanf("%d", &choice); fflush(stdin);
        switch (choice) {
            case 1:
                happiness += rand() % 15 + 1;
                hunger -=rand() % 15 + 1;
                goto refresh;
                break;
            case 2:
                hunger += rand() % 15 + 1;
                health -= rand() % 15 + 1;
                goto refresh;
                break;
            case 3:
                health += rand() % 15 + 1;
                happiness -= rand() % 15 + 1;
                goto refresh;
                break;
            case 4:
                saveData();
                goto refresh;
                break;
            case 5:
                return main();
                break;
            case 6:
                printf("Exit");
                break;
        }
    } while (choice < 1 || choice > 5);
}

void inputNamePet() {
    printf("Pick your pet name: "); fflush(stdin);
    gets(petName);
}

void saveData() {
    FILE *add = fopen("database.txt", "w");
    fprintf(add, "%d %s %d %d %d", pet, petName, hunger, happiness, health);
    fclose(add);

    linebreak;
    puts("Data Saved Successfully");
    sleep(2);
}


